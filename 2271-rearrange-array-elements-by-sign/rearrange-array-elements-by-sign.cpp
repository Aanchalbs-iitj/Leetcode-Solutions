class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        queue<int> qp,qn;
        for(int i=0;i<n;i++){
            if(nums[i]>=0) qp.push(nums[i]);
            else qn.push(nums[i]);
        }
        vector<int> ans;
        while(!qp.empty()){
        ans.push_back(qp.front());
        qp.pop();
        ans.push_back(qn.front());
        qn.pop();
        }
        return ans;
    }
};