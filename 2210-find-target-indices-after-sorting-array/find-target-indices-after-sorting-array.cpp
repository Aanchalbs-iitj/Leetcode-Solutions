class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
    int less=0, equal=0;//O(n) time complexity and constant O(1)-sc
    vector<int> ans;
    for (int i=0;i<nums.size();i++){
        if(nums[i]<target) less++;
        if (nums[i]==target) equal++;
    }
    for(int i=less;i<less+equal;i++){
        ans.push_back(i);
    }
    return ans;
    }
};