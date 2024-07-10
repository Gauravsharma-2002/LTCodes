class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int size = nums.size();
        vector<int> ans(size,0);
        for(int i = 0 ;i<size;i++){
            int ind = (i+k)%size;
            ans[ind]= nums[i];
        }
        for(int i = 0 ;i<size;i++){
            nums[i]= ans[i];
        }
    }
};