class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return nums;
        vector<int> ans(n,0);
        int epos=0;//start pointer
        int opos=n-1;//end pointer
        for(int i=0;i<n;i++){
            if(nums[i]%2==0) {
                ans[epos]=nums[i];
                epos++;
            }
            else{
                ans[opos]=nums[i];
                opos--;
            }
        }
        return ans;
    }
};