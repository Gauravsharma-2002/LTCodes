class Solution {
public:
// takes sc:O(n) and tc :O(n)
    vector<int> rearrangeArray(vector<int>& nums) {
        int size = nums.size();
        int positiveIndx = 0;
        int negativeIndx = 1;
        int i =0;
        vector<int> ans(size,0);
        while(i<size){
            if(nums[i]<0){
                ans[negativeIndx] = nums[i];
                negativeIndx +=2;
            }
            else if(nums[i] > 0){
                ans[positiveIndx] = nums[i];
                positiveIndx +=2;
            }
            i++;
        }
        return ans;
    }
};