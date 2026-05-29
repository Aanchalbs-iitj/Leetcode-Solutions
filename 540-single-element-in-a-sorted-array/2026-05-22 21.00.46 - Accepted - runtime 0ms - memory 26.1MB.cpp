class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
         int xr = 0;

    for(int x : nums) {

        xr ^= x;

    }

    return xr;

    }
};