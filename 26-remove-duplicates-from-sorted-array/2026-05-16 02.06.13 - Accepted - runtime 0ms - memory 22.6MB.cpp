class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int a=0;
        for (int b=1;b<nums.size();b++){
            if (nums[b]!=nums[a]){
                nums[a+1]=nums[b];
                a++;
            }
        }
            return a+1;
    }
};