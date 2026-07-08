class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.size();
        bool flag=false;//to detect non empty character
        int count=0;
        for(int i=n-1;i>=0;i--){
            if(s[i]==' ') {
                flag=true;
            }
            else {
                count++;
                flag=false;
            }
            if (flag==true && i+1<=n-1 && s[i+1]!=' ') break;
        }
        return count;
    }
};