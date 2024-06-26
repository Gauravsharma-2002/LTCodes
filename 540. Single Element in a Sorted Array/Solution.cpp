class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        int low = 0 ; int high = n-1;

        if (n == 1) return nums[0];
    if (nums[0] != nums[1]) return nums[0];
    if (nums[n - 1] != nums[n - 2]) return nums[n - 1];
    low =1 ;
    high = n-2;
        int mid = low+ (high-low)/2;
        while(low <= high){
            if(nums[mid]!=nums[mid+1] && nums[mid]!=nums[mid-1]){
                return nums[mid];
            }
            // for left side selection
            else if((mid%2==0 && nums[mid]==nums[mid+1]) || (mid%2 == 1 && nums[mid]==nums[mid-1])){
                low = mid+1;
            }
            // right side selection
            else if((mid%2==0 && nums[mid]==nums[mid-1])||(mid%2 ==1 && nums[mid]== nums[mid+1])){
                high = mid-1;
            }
            mid = low + ( high - low )/2;
        }

        return -1;
        
    }
};