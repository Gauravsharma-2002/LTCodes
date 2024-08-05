class Solution {
public:
    int countSumEqualAndLess(vector<int>& arr,int goal){
        if(goal<0) return 0;
        int size = arr.size();
        int i=0;int j=0;
        int cnt=0; int sum =0;
        while(j<size){
            sum+=arr[j];

            if(sum<=goal){
                cnt +=(j-i+1);
                j++;
            }
            else if(sum>goal) {
                while(sum>goal){
                    sum = sum - arr[i];
                    i++;
                }
                cnt+=(j-i+1);
                j++;
            }
        }
        return cnt;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        
        return countSumEqualAndLess(nums,goal) - countSumEqualAndLess(nums,goal-1);
    }
};