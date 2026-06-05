class Solution {
public:
    int sumofdigits(int n){
        if (n<=0) return 0;
        int digit=n%10;
        n=n/10;
        return digit+sumofdigits(n);
    }
    int minElement(vector<int>& nums) {
        int mini=INT_MAX;
        for(int i=0;i<nums.size();i++){
          nums[i]=sumofdigits(nums[i]);
          mini=min(mini,nums[i]);
        }
        return mini;
    }
};