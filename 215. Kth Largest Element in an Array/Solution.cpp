class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        
        int size = nums.size();
        priority_queue<int, vector<int>,greater<int>> minHeap;
        for(int i = 0;i<size;i++){
            minHeap.push(nums[i]);
            if(minHeap.size()> k){
                minHeap.pop();
            }
        }
        return minHeap.top();
    }
};