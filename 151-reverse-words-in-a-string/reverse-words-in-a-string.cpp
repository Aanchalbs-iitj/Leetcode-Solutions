class Solution {
public:
    string reverseWords(string s) {
        //using stack
        stack<string> st;
        int n=s.size();
        for(int i=0;i<n;i++){
            if (s[i]==' ') continue;
            string word="";
            while(i<n && s[i]!=' '){
                word+=s[i];
                i++;
            }
            st.push(word);
        }
        string ans="";
        while(!st.empty()){
            ans+=st.top();
            st.pop();
            if(!st.empty()) ans+=" ";
        }
        return ans;
    }
};