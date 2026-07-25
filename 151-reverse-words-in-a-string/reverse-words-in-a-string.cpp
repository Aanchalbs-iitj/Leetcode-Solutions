class Solution {
public:
    string reverseWords(string s) {
        //mutable strings and o(1) space;
        //in place
        reverse(s.begin(),s.end());
        string ans="";
        for(int i=0;i<s.size();i++){//individial word findings
            string word="";
            while (i<s.size()&&s[i]!=' '){
                word+=s[i];
                i++;
            }
            reverse(word.begin(),word.end());
            if(word.length()>0){
                ans+=" "+ word;
            }
        }
        return ans.substr(1);
    }
};