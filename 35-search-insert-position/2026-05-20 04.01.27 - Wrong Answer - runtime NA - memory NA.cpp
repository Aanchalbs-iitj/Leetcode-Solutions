class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        //sorted- binary search
        int low = 0, high = nums.size() - 1;
        int ans;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            ans=mid;
            if (nums[mid] == target) {
            return mid;
        }
            else if ( target>nums[mid]){
            low = mid + 1;
        }
            else {
                high=mid-1;
            }

    }
    return ans+1;
    }
};