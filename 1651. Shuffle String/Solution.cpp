class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        vector<char> ans(s.size(),-1);
        int size = s.size();
        for(int i=0;i<size;i++){
            ans[indices[i]] = s[i];
        }
        string  ans1 = "";
        for(int i=0;i<size;i++){
            ans1+= ans[i];
        }
        return ans1;
    }
};