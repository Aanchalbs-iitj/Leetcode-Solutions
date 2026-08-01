class Solution {
public:
    bool predictTheWinner(vector<int>& nums) {
        int n = nums.size();
                
        // Compute the cumulative sums array
        int cumSum[n];        
        for(int i=0; i<n; i++)
            if(i == 0)
                cumSum[i] = nums[i];
            else cumSum[i] = cumSum[i-1] + nums[i];
      
      // Define 2D DP table
        int dp[n][n];
      
        // i+1 represents the length of the sub-array we are considering
        // We start with i = 0 (i.e. size 1 sub-arrays) and process to i = n-1 (i.e. the entire array)
        for(int i=0; i<n; i++)
        {            
            // j represents the start index of the sub-array
            // For length (i+1) subarray, the start point can be (n-i-1) at most
            for(int j=0; j<n-i; j++)
            {
                // For simplicity, define the start and end index of the sub-array we considering
                int start = j;
                int end = i+j;
                
                // Base Case 1
                if(start == end)
                    dp[j][j+i] = nums[j];
                // Base Case 2
                else if(start + 1 == end)
                    dp[j][j+i] = max(nums[start],nums[end]);
                // Recursive Relationship
                else
                {                    
                    int choice_1 = nums[start] + (cumSum[end]-cumSum[start+1]+nums[start+1]-dp[start+1][end]);
                    int choice_2 = nums[end] + (cumSum[end-1]-cumSum[start]+nums[start]-dp[start][end-1]);
                    dp[j][j+i] = max( choice_1, choice_2 );                
                }
            }
        }
        // Return true if maximum score for Player 1 is greater than the corresponding score for Player 2
        return (dp[0][n-1] >= cumSum[n-1] - dp[0][n-1]);
    }
};