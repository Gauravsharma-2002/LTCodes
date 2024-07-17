class Solution {
public:
    string largestOddNumber(string num) {
        int size = num.size();
        int start = 0;
        int end = size -1;
        while(start<=end){
            int val = (int)num[end];
            if((val%2)!=0){
                break;
            }
            end--;
        }
        string ans = "";
        if(start<=end){
            for(int i=start;i<=end;i++){
                ans += num[i];
            }
        }
        return ans;
    }
};