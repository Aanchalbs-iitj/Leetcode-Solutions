class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int lsum=0;
        int rsum=0;
        int ridx= cardPoints.size()-1;
        int maxscore=0;
        for (int i=0;i<k;i++){//initially maxscore will be the k points sum which are on the left
            lsum+=cardPoints[i];
        }
        maxscore=lsum;
        for(int i=k-1;i>=0;i--){
            lsum=lsum-cardPoints[i];
            rsum=rsum+cardPoints[ridx];
            ridx--;
            maxscore=max(maxscore,lsum+rsum);
        }
        return maxscore;
    }
};