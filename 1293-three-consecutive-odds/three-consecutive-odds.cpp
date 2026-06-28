class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        bool odd=false;
        int count=0;
        for (int i=0;i<arr.size();i++){
            if(arr[i]%2!=0){
                odd=!odd;
                count+=1;
                if (count==3) return true;
            }
            else {
                odd=false;
                count=0;
            }
            
        }
        return false;
    }
};