class Solution {
    void insert(vector<int>& arr, set<int>& s) {
        int size = arr.size();
        for (int i = 0; i < size; i++) {
            s.insert(arr[i]);
        }
    }

public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        //  let set contains the unique elements
        set<int> s1;
        set<int> s2;
        vector<int> ans;
        int size = s1.size();
        int size2 = s2.size();
        insert(nums1, s1);
        insert(nums2, s2);
        if (size >= size2) {
            for (auto it :s1){
                if(s2.find(it)!= s2.end()){
                    ans.push_back(it);
                }
            }
        } else {
            for(auto it : s2){
                if(s1.find(it)!= s1.end()){
                    ans.push_back(it);
                }
            }
        }
        return ans;
    }
};