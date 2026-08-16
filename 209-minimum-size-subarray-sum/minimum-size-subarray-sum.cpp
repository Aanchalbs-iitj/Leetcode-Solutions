class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int left=0;
        int sum=0;
        int ans=0;//using ans =0 and only updating it when we find a valid subarray of smaller length
        for(int right=0;right<n;right++){
            sum+=nums[right];
            while(sum>=target){
                int len=right-left+1;
                if(ans==0|| len<ans){
                    ans=len;
                }
                sum-=nums[left];
                left++;
            }
        }
        return ans;
    }
};