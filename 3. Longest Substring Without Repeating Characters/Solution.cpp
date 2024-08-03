class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int size = s.size();
        map<char, int> mpp;
        int i = 0;
        int j = 0;
        int ans = 0;
        while(j<size){
            mpp[s[j]]++;
            if (mpp.size() == (j - i + 1)) {
                ans = max(ans, (j - i + 1));
                j++;
            } else if (mpp.size() < (j - i + 1)) {
                while (mpp.size() < (j - i + 1)) {
                    mpp[s[i]]--;
                    if (mpp[s[i]] == 0) {
                        mpp.erase(s[i]);
                    }
                    i++;
                }
                j++;
            }
        }
        return ans;
    }};