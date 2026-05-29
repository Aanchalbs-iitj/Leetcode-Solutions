class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        while (k>0){
            int n= nums.size();
            int temp=nums[n-1];
            k = k % n;
            for (int i=n-1;i>0;i--){
            nums[i]=nums[i-1];
        }
        nums[0]=temp;
        k--;
    }
    }
};