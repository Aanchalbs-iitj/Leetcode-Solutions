class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        vector<int> arr;
        sort(nums.begin(),nums.end());
        int rounds=nums.size()/2;
        for (int i=0;i<rounds;i++){
            for (int j=(i*2+1);j>=(i*2);j--){
                arr.push_back(nums[j]);
            }
        }
        return arr;
    }
};