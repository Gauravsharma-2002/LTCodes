class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        // map solution using single iteration
        vector<int> ans;
        map<int, int> mpp;
        int size = nums.size();
        int requiredCount = size / 3;
        for (int i = 0; i < size; i++) {
            if (mpp[nums[i]] == requiredCount) {
                ans.push_back(nums[i]);
                mpp[nums[i]]++;
            } else
                mpp[nums[i]]++;
        }
        return ans;
    }
};