class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size()-1;
        if(n==0) return 0;
        if(nums[n]>nums[n-1]) return n;
        if(nums[0]>nums[1]) return 0;
        int low = 1;
        int high = n-1;
        int mid = low + (high - low)/2;
        while(low<=high){
            if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1]) return mid;
            else if (nums[mid]>nums[mid-1]) {low = mid+1;}
            else  {high = mid-1;}
            mid = low + (high - low )/2;
        }
        return -1;
        
    }
};