class Solution {
public:
    int product(int n){
        if (n == 0) return 0;
        int pro=1;
        while(n>0){
            pro=pro*(n%10);
            n=n/10;
        }
        return pro;
    }
    int smallestNumber(int n, int t) {

            while(true){
                if ((product(n)%t)==0) {
                    return n;
                }
                n++;
            }

        }
};