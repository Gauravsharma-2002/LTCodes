class Solution {
public:
    int lastOccurance(vector<int>& nums,int target){
        int high = nums.size()-1;
        int low = 0;
        int mid = low + (high-low)/2;
        // int ans  = INT_MIN;
        int ans = -1;
        while(low<= high){  
            if(nums[mid]== target){
                // ans = max(ans,mid);
                ans =mid;
                low = mid +1;
            }
            // handleing if condintion here is required
           else if(nums[mid]>target){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
            mid = low + (high-low)/2;

        }
        return ans;
    }
    int firstOccurance(vector<int>& nums,int target){
       int high = nums.size()-1;
       int low = 0;
       int mid = low + (high-low)/2;
    //    int ans = INT_MAX;
        int ans =-1;
       while(low<=high){
        if(nums[mid]==target){
            // ans = min(ans,mid);
            ans = mid;
            high = mid -1;
        }
        //was making error here so need to hadle if condition appropriately
        else if(nums[mid]>target){
            high = mid-1;

        }else{
            low = mid +1;
        }
        mid = low + (high - low )/2;
       }
       return ans;

    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int ansFirst = firstOccurance(nums,target);
        int ansLast = lastOccurance(nums,target);
        vector<int> ans;
        // if(ansFirst == INT_MAX){
        //     ans.push_back(-1);
        // }else{
        //     ans.push_back(ansFirst);
        // }
        // if(ansLast == INT_MIN){
        //     ans.push_back(-1);
        // }else{
        //     ans.push_back(ansLast);
        // }
        if(ansFirst == -1){
            ans.push_back(-1);
            ans.push_back(-1);

        }
        else{
            ans.push_back(ansFirst);
            ans.push_back(ansLast);
        }
        return ans;
        
    }
};