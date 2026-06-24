class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
      int n=sentences.size();
      int maxi=INT_MIN;
      for (int i=0;i<n;i++){
        int cnt=0;
        for (auto it: sentences[i]){
            if (it==' ') cnt++;
        }
        cnt++;
        maxi=max(maxi,cnt);
      }
      return maxi;  
    }
};