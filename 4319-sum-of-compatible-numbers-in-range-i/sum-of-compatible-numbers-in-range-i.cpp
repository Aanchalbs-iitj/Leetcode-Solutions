class Solution {
public:
    int sumOfGoodIntegers(int n, int k) {
        int start=max(0, n - k);//in case of only positives allowed
        int end=n+k;
        int sum=0;
        for (int i=start;i<=end;i++){
            // if (abs(n-i)<=k && (n&i==0)) sum+=i;
             if ((abs(n-i)<=k) && ((n&i)==0)) sum+=i;
        }
        return sum;
    }
};