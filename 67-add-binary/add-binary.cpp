class Solution {
public:
    string addBinary(string a, string b) {
        string ans;
        int n=a.size()-1;
        int m=b.size()-1;
        int carry=0;
        while(n>=0 || m>=0){
            int sum=carry;
            if (n>=0){
                sum+=a[n]-'0';
                n--;
            }
            if (m>=0){
                sum+=b[m]-'0';
                m--;
            }
            carry=sum/2;
            sum=sum%2;
            ans+=(sum + '0');
        }
        if (carry){
            ans+=(carry+'0');
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};