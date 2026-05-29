class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        //similar to finding lower bound of the target element
        int low = 0, high = nums.size() - 1;
        int ans=nums.size();

    while (low <= high) {

        int mid = low + (high - low) / 2;
//maybe an answwer
        if (nums[mid] >= target) {
            ans=mid;
            high=mid-1;//to search in the first half cause to find the smallest
        }
        else {

            low = mid + 1;//look for right
            }

    }

    return ans;
    }
};