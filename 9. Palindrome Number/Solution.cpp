class Solution {
public:
    int reverse(int x){
        long temp=0 ;
        while(x){
            temp = temp*10 + x%10;
            x = x/10;
        }
        return temp;

    }
    bool isPalindrome(int x) {
        if(x<0) return false;
        int reversed = reverse(x);
        if(x == reversed) return true;
        else return false;
    }
};