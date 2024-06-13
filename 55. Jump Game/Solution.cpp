class Solution {
public:
    bool canJump(vector<int>& nums) {
       int farthest = 0;
       int size = nums.size();
       for(int i=0;i<size;i++){
        // any moment we are at the index unexplored by any element of array we say we can not go to it so we return false in that case
        if(i> farthest ){ return false;}
        // for rest of element we would do the farthest  exploration for each element 
        farthest = max(farthest, i+ nums[i]);
       }
       return true;
        
    }
};