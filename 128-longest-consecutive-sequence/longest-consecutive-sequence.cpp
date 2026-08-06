class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n= nums.size();
        if (n==0) return 0;
        int longest=1;// min number of sequence that will always be there
        unordered_set<int> st;
        for(int i=0;i<n;i++){
            st.insert(nums[i]);
        }
        //iterate through the set
        for (auto it : st){
            if (st.find(it-1)==st.end()){// the prev element does not exists means it is the first element of the sequence
                int cnt=1;
                int x=it;
                while(st.find(x+1)!=st.end()){//the next element exists
                    cnt++;
                    x=x+1;
                }
                longest=max(longest,cnt);
            }
        }
        return longest;
    }
};