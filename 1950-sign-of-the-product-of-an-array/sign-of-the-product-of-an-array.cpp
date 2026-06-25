class Solution {
public:
    int arraySign(vector<int>& nums) {
        bool ispositive=true;
        for (int i=0;i<nums.size();i++){

            if (nums[i]==0) return 0;
            if (nums[i]<0) ispositive= !ispositive;
        }
        return (ispositive? 1:-1);
    }
};