class Solution {
public:
    int minimumPushes(string word) {
        int cost=0;
        int n=word.size();//all characters are distinct
        for(int i=0;i<n;i++){
            cost+=(i/8+1);
        }
        return cost;
    }
};