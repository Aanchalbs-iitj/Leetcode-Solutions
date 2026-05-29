class Solution {
public:
    string removeOuterParentheses(string s) {
        //stack based approach-lifo
        //when stack is empty we will not add into the ans
        stack<int> st;
        string ans="";
        for (char ch : s){
            if (ch==')') st.pop();
            if (!st.empty()) ans.push_back(ch);
            if (ch=='(') st.push(ch);
        }
        return ans;
    }
};