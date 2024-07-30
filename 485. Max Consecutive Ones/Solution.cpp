class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int size = nums.size();
        int ans =0;
        int i=0,j=0;
        while(i<size && j<size){
            if(nums[j]==0){
                i=j+1;
                j++;
            }
            else{
                ans = max(ans,j-i+1);
                j++;
            }
        }
        return ans;
    }
};