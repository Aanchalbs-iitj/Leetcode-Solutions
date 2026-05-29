class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mpp;
        for (int i=0;i<nums.size();i++){
            int a= nums[i];
            int more= target-a;
            auto it=mpp.find(more);
            if (it!=mpp.end()){
                return {i,it->second};
            }
            mpp[a]=i;// storing (number,index) in map
        }
        return {};
    }
};