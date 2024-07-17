class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans = "";
        int count = 0;
        int size = s.size();
        for(int i=0;i<size;i++){
            if(s[i] == '('){
                if(count>0){
                    ans+='(';
                }
                count++;
            }else if(s[i] == ')'){
                count--;
                if(count>0){
                    ans+=')';
                }
            }
        }
        return ans;
    }
};