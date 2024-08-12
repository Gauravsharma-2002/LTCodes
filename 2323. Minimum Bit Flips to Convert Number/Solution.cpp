class Solution {

public:
    int countBit(int n) {
        int cnt = 0;
        while (n != 1) {
            if (n & 1)
               cnt++;
            n >>= 1;
        }
        if(n==1) cnt++;
        return cnt;
    }
    int minBitFlips(int start, int goal) {
        int ans = (start^goal);
        if(ans == 0 ) return ans;
        int res = countBit(ans);
        return res;
    }
};