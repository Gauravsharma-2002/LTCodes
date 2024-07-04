class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int size = nums.size();
        unordered_map<int,int> mpp;
        for(int i =0;i<size;i++){
            mpp[nums[i]] = i;
        }
        for(int i=0;i<size;i++){
            int inverse = target - nums[i];
            if(mpp.count(inverse) && mpp[inverse]!=i){
                return {i,mpp[inverse]};
            }
        }
        return {};
    }
};