class Solution {
public:
    int sumofdigits(int n){
            if (n<1) return 0 ;
            return (n%10) + sumofdigits(n/10);
        }
    int differenceOfSum(vector<int>& nums) {
        int esum=0;
        int dsum=0;
        for (int i=0;i<nums.size();i++){
            esum=esum+nums[i];
            dsum+=sumofdigits(nums[i]);
        }
        return (esum>dsum)? (esum-dsum) : (dsum-esum);
    }
};