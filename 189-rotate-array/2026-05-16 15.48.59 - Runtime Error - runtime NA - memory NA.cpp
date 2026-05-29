class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        reverse(nums.begin(),nums.begin()+(n-k));//4th index not included
        reverse(nums.begin()+(n-k),nums.end());
        reverse(nums.begin(),nums.end());
    }
};