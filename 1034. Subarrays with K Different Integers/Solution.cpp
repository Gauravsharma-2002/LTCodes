class Solution {
public:
    int cntLessThanAndEqualRequiredSubarray(vector<int>& nums,int k){
        if(k<0) return 0;
        int size = nums.size();
        int i=0,j=0;
        int cnt = 0;
        map<int,int> mpp;
        while(j<size){
            mpp[nums[j]]++;
            if(mpp.size()<=k){
                cnt +=(j-i+1);
                j++;
            }
            else if( mpp.size()> k){
                while(mpp.size()>k){
                    mpp[nums[i]]--;
                    if(mpp[nums[i]] == 0 ){
                        mpp.erase(nums[i]);
                    } i++;
                }
                cnt += (j-i+1);
                j++;
            }

        }
        return cnt;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return cntLessThanAndEqualRequiredSubarray(nums,k) - cntLessThanAndEqualRequiredSubarray(nums,k-1);
    }
};