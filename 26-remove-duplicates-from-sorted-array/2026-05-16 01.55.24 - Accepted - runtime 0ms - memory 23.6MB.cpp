class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set <int> st;// due to unique and sorted words
        for (int i=0;i<nums.size();i++){
            st.insert(nums[i]);//nlogn
        }
        int idx=0;
        for (auto it :st){
            nums[idx]=it;
            idx++;
        }
        return idx;
    }
};