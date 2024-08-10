class Solution {
public:
    int lengthOfLastWord(string s) {
        // do  two things 
        // first remove the last white spaces 
        // go for the first space
        int size = s.size();
        int count =0;
        int i=size-1;
        while(i>=0 && s[i]== ' '){

            i--;

        }
        while(i>=0 && s[i]!=' '){
            count++;
            i--;
        }
        return count;
    }
};