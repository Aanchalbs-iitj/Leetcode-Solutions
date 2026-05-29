class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.length()!=t.length()){
            return false;
        }
        unordered_map<char,char> mp;
        for (int i=0;i<s.length();i++){
            char original=s[i];
            char replacement=t[i];
        if (mp.find(original)==mp.end()){// original is not present in map
        // check whether replacement character is already mapped with some other character
            bool alreadymapped=false;
            for (auto it :mp){
                if (it.second==replacement){
                    alreadymapped=true;
                    break;
                }
            }
            if (!alreadymapped){
                mp[original]=replacement;
            }
            else{
                return false;
            }
        }
        else{
            char mappedchar=mp[original];
            if (replacement != mappedchar ){
                return false;
            }
        }
        }
        return true;
    }
};