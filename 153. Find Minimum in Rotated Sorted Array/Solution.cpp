class Solution {
public:
    int findMin(vector<int>& nums) {
        
        int low =0, high = nums.size()-1;
        int ans = INT_MAX;
        int mid = low + (high-low)/2;
        while(low <= high){
            if(nums[low] <= nums[high]){
                ans= min(ans,nums[low]);
                return ans ;
                break;
            }
            else if( nums[low]<= nums[mid]){
                ans = min(ans,nums[low]);
                low = mid+1;
            }
            else if(nums[mid]<= nums[high]){
                ans = min(ans,nums[mid]);
                high = mid-1;
            }
            
            mid = low + (high-low)/2;
        }
        return ans;
    }
};