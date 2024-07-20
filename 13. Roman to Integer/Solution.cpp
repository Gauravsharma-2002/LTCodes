class Solution {
public:
    int romanToInt(string s) {
        int size = s.size();
        // logic if the next character is greater than the current character
        // subtract the current character vector<int> v()
        //  taking map to get those value
        map<char, int> mpp;
        mpp.insert({'I', 1});
        mpp.insert({'V', 5});
        mpp.insert({'X', 10});
        mpp.insert({'L', 50});
        mpp.insert({'C', 100});
        mpp.insert({'D', 500});
        mpp.insert({'M', 1000});
        int ans = 0; // range of ans would be [1,3999];
        // if give string only contains 1 value
        if (size == 1) {
            return mpp[s[0]];
        }
        // for other case needed to be constructed
        for (int i = 0; i < size - 1; i++) {
            int currentVal = mpp[s[i]];
            int nextVal = mpp[s[i + 1]];
            if (currentVal >= nextVal) {
                ans += currentVal;
            } else {
                ans -= currentVal;
            }
        }
        // the last value would always get added 
        return ans + mpp[s[size-1]];
    }
};