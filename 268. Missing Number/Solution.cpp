class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int size = nums.size();
        //constant time 
        long long requiredSum = size%2==0 ? ((size/2)*(size+1)) : (((size+1)/2)*size);
        long long givenSum = 0;
        // tc :O(n)
        for(int i=0;i<size;i++){
            givenSum += nums[i];

        }
        return (int)(requiredSum - givenSum);
    }
};