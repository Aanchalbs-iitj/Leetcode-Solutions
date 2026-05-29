class Solution {
public:
    bool rotateString(string s, string goal) {
        if (s.size()!=goal.size()) return false;
        int index=goal.find(s[0]);
        int shift=s.size()-index;
        for (int i=0;i<s.size();i++){
            if (i<shift){
                if (s[i]!=goal[s.size()-shift+i]){
                    return false;
                }
            }
            else{
                if (s[i]!=goal[i-shift]) return false;
            }
        }
        return true;
    }
};