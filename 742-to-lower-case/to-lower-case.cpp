class Solution {
public:
    string toLowerCase(string s) {
        for (int i = 0; i < s.length(); i++) {
            if (s[i] >= 'A' && s[i] <= 'Z') {
               s[i] = s[i] + ('a' - 'A');//So adding 32 to an uppercase letter gives its lowercase equivalent.
            }
        }
        return s;
    }
};