class Solution {
public:
    int minBitFlips(int start, int goal) {
        // we need to flip which are different so no of flips is the number of bits which are different.
        int n=start ^ goal;
        int cnt =0;
        while(n>0){
            n=n&(n-1);
            cnt++;
        }
        return cnt;
    }
};