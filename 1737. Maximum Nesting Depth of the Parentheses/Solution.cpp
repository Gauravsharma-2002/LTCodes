class Solution {
public:
    int maxDepth(string s) {
        int size = s.size();
        int depth=0;
        int currentDepth = 0;
        for(int i=0;i<size;i++){
            if(s[i]=='('){
                currentDepth++;
                depth = max(currentDepth,depth);
            }
            else if(s[i]==')'){
                currentDepth--;
            }
        }
        return depth;
    }
};