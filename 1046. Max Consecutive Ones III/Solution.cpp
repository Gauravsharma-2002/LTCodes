class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int size = nums.size();
        int i = 0, j = 0;
        int ans = 0;
        while (j < size) {
            if (nums[j] == 0)
                k--;

            // if (k > 0)
            //     j++;
            if (k >= 0) {
                ans = max(ans, (j - i + 1));
                j++;
            } else if (k < 0) {
                while (k < 0) {
                    if (nums[i] == 0)
                        k++;
                    i++;
                }
                j++;
            }
        }
        return ans;
    }
};