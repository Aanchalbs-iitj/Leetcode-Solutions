class Solution {
public:
    bool check(vector<int>& nums) {
        int cnt=0;
        for (int i=0;i<nums.size();i++){
            if (nums[i]>nums[(i+1)%nums.size()]){
                cnt=cnt+1;
            }
        }
        if (cnt==0 || cnt==1) return true;
        else return false;
    }
};