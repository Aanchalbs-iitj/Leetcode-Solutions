class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
    int low=0, high=nums.size()-1;
    int first=-1,last=-1;
    while(low<=high){//    Binary search → O(log n)
        int mid=low+(high-low)/2;
        if (nums[mid]==target){
            first=last=mid;
            while(first > 0 && nums[first-1]==target){//    Expanding left/right → worst case O(n)
                first--;
            }
            while(last < nums.size() - 1 && nums[last+1]==target){
                last++;
            }
            return {first,last};
        }
        else if (target>nums[mid]){
            low=mid+1;
        }
        else {
            high=mid-1;
        }
       } 
       return {first,last}; 
    }
};//So total worst-case complexity:O(n)