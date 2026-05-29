class Solution {
public:
    int addDigits(int num) {
        int sum=0;
        while(num!=0){
          sum += num%10;
          num=num/10;
        }
        int sum2=0;
        while(sum!=0){
            sum2 += sum%10;
            sum=sum/10;
        }
        return sum2;
    }
};