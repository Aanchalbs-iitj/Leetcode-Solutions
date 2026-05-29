class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // using concept of xor
        int xor1 =0;
        for (int i=0;i<nums.size();i++){
            xor1 =xor1 ^nums[i];
        }
        return xor1;
    }
};