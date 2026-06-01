class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        if (digits[n-1]!=9){//last digit is not 9
            digits[n-1]++;
            return digits;
        }
        int i=n-1;
        while(i>=0 && digits[i]==9){
            digits[i]=0;
            i--;
        }
        if (i>=0){
            digits[i]++;
            return digits;
        }
        //all are 9
        vector<int> ans(n + 1, 0);
        ans[0]=1;
        return ans;  
    }
};