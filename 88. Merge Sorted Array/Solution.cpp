class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int it = m+n-1;
        int i = m-1;
        int j= n-1;
        while(i>=0 && j>=0 ){
            if(nums2[j]>nums1[i]){
                nums1[it]=nums2[j--]; it--;
            }
            else {
                nums1[it]=nums1[i--];it--;
            }
        }
        while(i>=0 && it>=0){
            nums1[it]= nums1[i];
            it--;i--;
        }
        while(j>=0 && it>=0){
            nums1[it]=nums2[j--]; it--;
        }
    }
};