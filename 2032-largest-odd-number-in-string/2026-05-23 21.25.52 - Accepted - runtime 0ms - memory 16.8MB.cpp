class Solution {
public:
    string largestOddNumber(string num) {
        while(!num.empty()){
            char last=num.back();// Access the last element
            int number=last-'0';// Convert to integer
            if (number%2!=0){//for odd check
                return num;
            }
            num.pop_back();// Decrease the size instantly
        }
        return "";
    }
};