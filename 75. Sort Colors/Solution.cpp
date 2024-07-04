class Solution {
public:
    void sortColors(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        int i = -1;
        int j = nums.size();
        int w =0;
        while(w<j){
            if(nums[w]==0){
                swap(nums[w],nums[i+1]);
                i++;
                w++;
            }
            else if(nums[w]==2){
                swap(nums[w],nums[j-1]);
                j--;
            }
            else{w++;}
            

        }

    }
};