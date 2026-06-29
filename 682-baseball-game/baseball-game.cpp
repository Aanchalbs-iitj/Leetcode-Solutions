class Solution {
public:
    int calPoints(vector<string>& operations) {
        int sum=0;
        int n=operations.size();
        vector <int> records;
        for (int i=0;i<n;i++){
            if ( operations[i]=="+"){
                int p= records.size();
                int x;
                // sum+=(operations[i-1][0]-'0')+(operations[i-2][0]-'0');
                x=records[p-1]+records[p-2];
                records.push_back(x);
                sum+=x;   
            }
            else if (operations[i]=="D"){
                int x=2*(records[records.size()-1]);
                // sum+=2*(operations[i-1]-'0');
                records.push_back(x);
                sum+=x;
            }
            else if (operations[i]=="C"){
                // sum-=(operations[i-1]-'0')
                int x=records.back();
                records.pop_back();
                sum-=x;
            } 
            else {
                bool negative=false;
                // int m=operations[i].size();
                int x=0;
                for (char c : operations[i]){
                    if (c=='-') {
                        negative=true;
                        continue;
                    }
                    // x+=(operations[i][j]-'0') * pow(10,m-1-j);
                    x=x*10+(c-'0');
                }
                x=(negative)? -x:x;
                records.push_back(x);
                sum+=x;
            }
        }
        return sum;
    }
};