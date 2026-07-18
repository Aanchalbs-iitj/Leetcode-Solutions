class Solution {
private:
    int gcdd(int a,int b){
        while(b!=0){//works coz gcd(a,b)=gcd(b,a mod b);
            int temp=b;
            b=a%b;
            a=temp;
        }
        return a;
    }
public:
    int findGCD(vector<int>& nums) {
        int mn=nums[0];
        int mx=nums[0];
        for (int i=1;i<nums.size();i++){
            mn=min(mn,nums[i]);
            mx=max(mx,nums[i]);
        }
        return gcdd(mn,mx);
    }
};