class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int low = 0 , high = nums.size()-1;
        int mid = low + (high-low)/2;
        while( low <= high){
            if(nums[mid]==target){
                return true ;
            }
            // hadling duplicates
            if(nums[low]== nums[mid] && nums[mid]==nums[high]){
                low++;
                high--;
            }
            
            else if( nums[mid]>= nums[low]){
                if(nums[low]<= target && nums[mid]> target){
                    high = mid -1;

                }
                else {
                    low = mid+1;
                }
            }
            else if(nums[mid]<=nums[high]){
                if(nums[mid]< target && nums[high]>= target){
                    low = mid + 1;

                }
                else{
                    high = mid -1;
                }
            }
            mid = low + (high - low)/2;
        }
        return false;
        
    }
};