class Solution {
public:
    string reverseWords(string s) {
        //traverse from back
         int i = s.size() - 1;

        string ans;

        while (i >= 0) {

            // Skip spaces

            while (i >= 0 && s[i] == ' ')

                i--;

            if (i < 0)

                break;

            int j = i;

            while (j >= 0 && s[j] != ' ')

                j--;

            ans += s.substr(j + 1, i - j);

            ans += ' ';

            i = j;

        }

        ans.pop_back();     

        return ans;
    }
};