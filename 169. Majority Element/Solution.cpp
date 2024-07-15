class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int size = nums.size();
        // vector<int> hash(10,0);
        map<int,int> mpp;
        for(int i=0;i<size;i++){
            mpp[nums[i]]++;

        }
        int max = INT_MIN;
        int key ;
        for(auto it: mpp){
            if(it.second >= max){
                max = it.second;
                key = it.first ;
            }
        }

        if(max > (size/2)){
            return key;
        }
        else return -1;

        
    }
};