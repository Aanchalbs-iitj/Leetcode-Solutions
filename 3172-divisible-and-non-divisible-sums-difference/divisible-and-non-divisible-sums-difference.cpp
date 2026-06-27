class Solution {
public:
    int differenceOfSums(int n, int m) {
        if (m==1) return -(n*(n+1)/2);
        int num1=1;
        int num2=(n*(n+1)/2)-1;
        for (int i=2;i<=n;i++){
            if (i%m!=0) {
                num1+=i;
                num2-=i;
            }

        }
        return num1-num2;
    }
};