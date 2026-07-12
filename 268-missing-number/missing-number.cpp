class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ans=nums.size();//cause index goes upto n-1 only so manually update
        for(int i=0;i<nums.size();i++){
            ans^=nums[i]^i;
        }
        return ans;
    }
};