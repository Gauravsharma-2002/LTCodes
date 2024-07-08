class Solution {
public:
    bool isAnagram(string s, string t) {
        // create 2 maps and push the char count in the for both strings 
        //  then check if both map are same or not 
        //  ALSO if two strings are of different we don't need to check for anagram
        if(s.length()!= t.length()){
            return false;
        }
        int size = s.length();
        map<char,int> mp1,mp2;
        for(int i = 0 ;i<size;i++){
            mp1[s[i]]++;
            mp2[t[i]]++;
        }
        return( mp1 == mp2 )? true : false;
        
    }
};