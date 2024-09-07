class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& nums, int m, int n) {
        int size = nums.size();
        vector<vector<int>> v;
        if(size != m*n) return v;
        vector<int> temp;
        int i=0;int j=n-1;
        while(j<size){
            if(i<j){
                temp.push_back(nums[i]);
                i++;
            }
            else if( i==j){
                temp.push_back(nums[i]);
                v.push_back(temp);
                temp.clear();
                i++;
                j += n;
            }
        }
        return v;

    }
};