class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans;
        vector<int> arr(101,-1);//for hashing
        int mini=INT_MAX,maxi=INT_MIN;
        for(int i=0;i<n;i++){
            mini=min(mini,nums[i]);
            maxi=max(maxi,nums[i]);
            arr[nums[i]]++;
        }
        //range-mini to maxi;
        for(int i=mini;i<=maxi;i++){
            if(arr[i]==-1){//means its missing
                ans.push_back(i);
            }
        }
        return ans;
    }
};