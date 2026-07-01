class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n=nums.size();
        int maxlen=0;
        int l=0,r=0,zeros=0;
        while(r<n){
            if (nums[r]==0) zeros++;
            if(zeros>1){//optimisation
                if (nums[l]==0) zeros--;
                l++;
            }
            if (zeros<=1){
            int len=r-l+1;
            maxlen=max(maxlen,len); 
            }
            r++;      
        }
        return maxlen-1;
    }
};