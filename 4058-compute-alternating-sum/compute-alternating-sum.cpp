class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int alsum=0;
        for (int i=0;i<nums.size();i++){
            if(i==0 || i%2==0){
                alsum+=nums[i];
            }
            else {
                alsum-=nums[i];
            }
        }
        return alsum;
    }
};