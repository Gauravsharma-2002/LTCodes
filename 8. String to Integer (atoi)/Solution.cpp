class Solution {
public:
    int myAtoi(string s) {
        int size = s.size();
        long ans  =0;
        int i = 0;
        bool neg = false;
        // check for white spaces
        while((s[i]==' ') && (i<size)) i++;
        // now check for sign
        // if there is the symbol then we have to take consideration form next characters
        if((i<size) && (s[i] == '-' || s[i]== '+' ) ){
            s[i]=='-' ? neg = true:neg=false;
            i++; // updating for next character
        }
        while(i<size && isdigit(s[i])){
            ans = ans*10 +(s[i]-'0');
            if(ans > INT_MAX){ // if my answer exceeds the integer limits
                return neg ? INT_MIN:INT_MAX;
            }
            i++;
        }
        ans = neg ? -ans : ans;
        if(ans< INT_MIN) return INT_MIN;
        if(ans>INT_MAX) return INT_MAX;
        return ans;

    }
};