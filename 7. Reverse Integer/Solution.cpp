class Solution {
public:
    int reverse(int x) {
        bool isNegative = false;
        if(x<0) isNegative = true;
        int val = abs(x);
        int temp = 0;
        while(val){
            if(temp > INT_MAX/10 || (temp == INT_MAX/10 && val%10>7)){
                return 0;
            }
            temp = temp*10 + val%10;
            // if(temp>=INT_MAX && isNegative) return INT_MIN;
            // if(temp>=INT_MAX && !isNegative) return INT_MAX;
            val = val/10;

        }
        return isNegative ? -temp:temp;
        
    }
};