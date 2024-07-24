class Solution {
public:
    int strStr(string haystack, string needle) {
        // using find function 
        int position = haystack.find(needle);
        return position;
    }
};