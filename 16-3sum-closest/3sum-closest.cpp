class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int closest=INT_MAX;
        int ans;
        for (int i=0;i<n;i++){
            if (i>0 && (nums[i]==nums[i-1])) continue;
            int j=i+1;
            int k=n-1;
            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];
                if (abs(sum-target)< closest){
                    ans=sum;
                    closest=abs(sum-target);
                }
                if (sum<target){
                    j++;
                }
                else if (sum>target){
                    k--;
                }
                else return sum;
            }
        }
        return ans;
    }
};