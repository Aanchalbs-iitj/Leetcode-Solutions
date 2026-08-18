class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n=nums.size();
        if(k==n){
            return *max_element(nums.begin(),nums.end());
        }
        vector<int> freq(51,0);
        for(int i=0;i<n;i++){
            freq[nums[i]]++;
        }
        int maxi=-1;
        if(k==1){
            for(int i=0;i<n;i++){
                if(freq[nums[i]]==1) maxi=max(maxi,nums[i]);
            }
            return maxi;
        }
        else {
            if((freq[nums[0]]==1) && (freq[nums[n-1]]==1)){//both occur once
                    return max(nums[0],nums[n-1]);
            }
            else if (freq[nums[0]]==1) return nums[0];
            else if (freq[nums[n-1]]==1) return nums[n-1];
            else return -1;
        }
    }
};