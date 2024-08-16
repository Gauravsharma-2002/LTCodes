class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int size = nums.size();
        long xorall = 0;
        int buck1 = 0;
        int buck2 = 0;
        int firstRightBitNumberForXorAll =0;
        vector<int>ans;
        for(int i= 0;i<size;i++) xorall ^= nums[i];
        firstRightBitNumberForXorAll = (xorall & (xorall-1))^xorall;
        for(int i=0;i<size;i++){
            if(nums[i]& firstRightBitNumberForXorAll){
                buck1 ^= nums[i];
            }else{
                buck2 ^= nums[i];
            }
        }
        ans.push_back(buck1);
        ans.push_back(buck2);

        return ans;
    }
};