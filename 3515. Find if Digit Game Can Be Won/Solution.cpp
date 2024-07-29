class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        long singleSum = 0;
        long doubleSum =0;
        int size = nums.size();
        for(int i=0;i<size;i++){
            if(nums[i]<10 && nums[i]>=1 ) singleSum+=nums[i];
            else  doubleSum +=nums[i];
        }
        if(doubleSum == singleSum) return false;
        else return true;
    }
};