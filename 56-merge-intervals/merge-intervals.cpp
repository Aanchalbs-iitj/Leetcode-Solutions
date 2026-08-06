class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {//brute way
    int n = intervals.size();
    sort(intervals.begin(), intervals.end());
    vector<vector<int>> ans;
    for (int i = 0; i < n; i++) {
        int start = intervals[i][0];
        int end = intervals[i][1];
        if (!ans.empty() && end <= ans.back()[1]) {//already the current interval is inside the ith interval
            continue;
        }
        for (int j = i + 1; j < n; j++) {
            if (intervals[j][0] <= end) {
                end = max(end, intervals[j][1]);
            } else {
                break;
            }
        }
       ans.push_back({start, end});
    }
    return ans;
    }
};
//every subinterval is checked twice or compared twice 