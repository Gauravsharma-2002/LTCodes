class Solution {
public:
    int numLessAndEqual(vector<int>& nums, int k) {
        if (k < 0)
            return 0;
        int size = nums.size();
        int i = 0, j = 0;
        int cnt = 0;
        while (j < size) {
            if ((nums[j]%2 == 1)) { // check for odd interger
                k--;
            }

            // when no of integer is less than or equals to the k
            if (k >= 0) {
                cnt += (j - i + 1);
                j++;
            }
            // when window contains more no of odd integer than k
            else if (k < 0) {
                while (k < 0) {
                    if (nums[i]%2 ==1) {
                        k++;
                    }
                    i++;
                }
                if (i <= j) {

                    cnt += (j - i + 1);
                }
                j++;
            }
        }
        return cnt;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        return numLessAndEqual(nums, k) - numLessAndEqual(nums, k - 1);
    }
};