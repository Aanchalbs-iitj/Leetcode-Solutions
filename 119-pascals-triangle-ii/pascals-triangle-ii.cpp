class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> row;
        row.reserve(rowIndex + 1);
        long long res=1;
        row.push_back(res);
        for(int i=1;i<rowIndex+1;i++){
            res=res*(rowIndex+1-i);
            res=res/i;
            row.push_back(res);
        }
        return row;
    }
};