class Solution {
public:
    int candy(vector<int>& ratings) {
        int n=ratings.size();
        vector<int> left(n);
        // vector<int> right(n);
        left[0]=1;
        // right[n-1]=1;//boundary and there is no right neighbour
        for(int i=1;i<n;i++){//for left vector
            if (ratings[i]>ratings[i-1]){
                left[i]=left[i-1]+1;
            }
            else left[i]=1;
        }
        int right=1;
        int sum=max(1,left[n-1]);
        for(int i=n-2;i>=0;i--){
            if(ratings[i]>ratings[i+1]){
                right++;
            }
            else right=1;
            // else right[i]=1;
            sum+=max(left[i],right);
        }
        // int candies=0;
        // for(int i=0;i<n;i++){
        //     candies+=max(left[i],right[i]);
        // }
        return sum;
    }
};