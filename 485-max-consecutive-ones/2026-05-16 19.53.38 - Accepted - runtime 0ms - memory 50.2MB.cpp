class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt=0;
        int max_count =0;
        for (int i=0;i<nums.size();i++){
            if (nums[i]==1){
                cnt++;
                max_count = max(max_count, cnt);
                }
            else {
                cnt=0;
            }
    }
     return max_count;
}
};