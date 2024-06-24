class Solution {
public:
    // int findLargest(vector<int>& nums){
    //     int ans = INT_MIN;
    //     int size = nums.size();
    //     for(int i=0;i<size;i++){
    //         if(nums[i]>ans) ans = nums[i];
    //     }
    //     return ans;
        
    // }
    int sum(vector<int> nums,int mid){
        int size = nums.size();
        int sum = 0;
        for(int i=0;i<size;i++){
            sum += ceil((double)nums[i]/(double)mid);
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low=1;
        // int high = findLargest(nums);
        int high = *max_element(nums.begin(),nums.end());
        int mid = low + (high-low)/2;
        while(low<=high){

            if(sum(nums,mid)<=threshold) {
                high = mid-1;
            }
            else{
                low = mid+1;
            }
            mid = low + (high -low)/2;
        }
        return low;

        
    }
};