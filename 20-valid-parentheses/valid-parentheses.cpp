class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                st.push(s[i]);
            }
            else {
                if (st.empty()) return false;//closing bracket wil be added which is in itself wrong cause there is no previous open bracket of that.
                if ((s[i]==')'&& st.top()=='(') || (s[i]=='}'&& st.top()=='{') || (s[i]==']'&& st.top()=='[')){
                st.pop();
            }
                else return false;
        }
    }
        return st.empty();
    }
};