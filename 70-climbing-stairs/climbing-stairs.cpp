class Solution {
public:
    int climbStairs(int n) {
        if (n<=2) return n;
        int prev2=1;//climbing one step ways
        int prev =2;//climbing two steps ways
        for (int i=3;i<=n;i++){
            int curr= prev +prev2;
            prev2=prev;
            prev=curr;
        }
        return prev;
    }
};