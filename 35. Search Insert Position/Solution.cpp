class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        // find the ceil for the target 
        long long high = nums.size()-1;
        long long low = 0;
        long long mid = low + (high -low)/2;
        while(low<=high){
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]>target){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
            mid = low + (high-low)/2;
        }
        return low ;
        
    }
};