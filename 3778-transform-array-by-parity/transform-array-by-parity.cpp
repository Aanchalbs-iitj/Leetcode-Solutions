class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        int even=0,odd=0;
        for (int i=0;i<nums.size();i++){
            if(nums[i] & 1) odd++;
            else even++;
        }
        for (int j=0;j<nums.size();j++){
            if (j<even) nums[j]=0;
            else nums[j]=1;
        }
        return nums;
    }
};