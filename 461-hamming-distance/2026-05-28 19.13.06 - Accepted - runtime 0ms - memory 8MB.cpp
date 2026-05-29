class Solution {
public:
    int hammingDistance(int x, int y) {
        int n=x^y;//xor-bits that differ
        int cnt=0;
        while (n){//counting no of set bits (ie 1)
            n=n&(n-1);//removes lowest set bit
            cnt++;
        }
        return cnt;
    }
};