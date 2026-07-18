class Solution {
public:
    void gen(vector<string> &ans,int idx,string& str,int open,int close, int n){
        //idx=length of str, open=no of ( , close=no of );
        if (idx==2*n){
            ans.push_back(str);
            return;
        }
        if (open<n){
            str.push_back('(');
            gen(ans,idx+1,str,open+1,close,n);
            str.pop_back();
        }
        if (close<open){
            str=str+")";
            gen(ans,idx+1,str,open,close+1,n);
            str.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string str="(";
        gen(ans, 1,str,1,0,n);
        return ans;
    }
};