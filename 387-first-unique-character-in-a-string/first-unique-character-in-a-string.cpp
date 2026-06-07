class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> arr(26,0);//s consists of only lowercase english letters
        for(int i=0;i<s.size();i++){
            int idx=s[i]-'a';
            arr[idx]++;
        }
        for(int i=0;i<s.size();i++){
            int idx=s[i]-'a';
            if (arr[idx]==1){
                return i;
            }
        }
        return -1;
    }
};