class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // trick or the thing that is working here is simple 
        // initialise a variable with the first element of the array 
        // if it is repeated in array it would get canceled 
        // else it would survive the xor war
        int size = nums.size();
        int ans = nums[0];
        for(int i=1;i<size;i++){
            ans ^=nums[i];
        }
        return ans;
    }
};