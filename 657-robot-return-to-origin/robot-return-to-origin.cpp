class Solution {
public:
    bool judgeCircle(string moves) {
        int vertical=0;
        int horizontal=0;
        for(char c : moves){
            if (c=='U') vertical+=1;
            if (c=='D') vertical-=1;
            if (c=='L') horizontal+=1;
            if (c=='R') horizontal-=1;
        }
        if ((vertical==0) && (horizontal==0)) return true;
        else return false;
    }
};