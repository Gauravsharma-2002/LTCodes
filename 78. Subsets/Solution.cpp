class Solution {
    void solve(vector<vector<int>>& arr,vector<int> nums,vector<int> op ){
        if(nums.size() == 0){
            arr.push_back(op);
            return;
        }

        vector<int> op1 = op;
        op1.push_back(nums[0]);
        // vector<int> nums1 = nums;
        nums.erase(nums.begin()+0);
        solve(arr,nums,op1);
        solve(arr,nums,op);
        return ;


    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> arr;
        vector<int> op;
        solve(arr,nums,op);
        return arr;
        
    }
};