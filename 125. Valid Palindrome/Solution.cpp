class Solution {
    bool check(string s){
        int size = s.size();
        int i=0,j=size-1;
        while(i<=j){
            if(s[i]!=s[j])
                return false;
            i++;
            j--;    
        }
        return true;
    }
public:
    bool isPalindrome(string s) {
        int size = s.size();
        // int i=0;
        string temp ="";
         for (int i = 0; i < size; i++) {
            // Check if the character is alphanumeric
            if (isalnum(s[i])) {
                // Convert to lowercase and append to temp
                temp += tolower(s[i]);
            }
        }
        return check(temp);
    }
};