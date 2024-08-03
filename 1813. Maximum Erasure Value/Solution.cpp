class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int size = nums.size();
        int i=0;int j=0;
        int sum =0;
        int temp = 0;
        map<int,int> mpp;
        while(j<size){
            // calculation
            temp+= nums[j];
            mpp[nums[j]]++;

            // conditions 
            if(mpp.size()==(j-i+1)){
                sum = max(sum,temp);
                j++;
            }
            else if(mpp.size()<(j-i+1)){
                while(mpp.size()<(j-i+1)){
                    mpp[nums[i]]--;
                    temp -= nums[i];
                    if(mpp[nums[i]]==0){
                        mpp.erase(nums[i]);
                    }
                    i++;
                }
                j++;
            }
        }
        return sum;
    }
};