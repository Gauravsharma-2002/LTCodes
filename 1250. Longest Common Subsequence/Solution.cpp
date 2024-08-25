class Solution {
    // int  t[1001][1001];
    vector<vector<int>> t;

public:
    int LCS(string &x, string &y, int n, int m) {
        if (n == 0 || m == 0)
            return 0; // if any of string is empty that means that there is no
                      // common in them
        if(t[m][n]!= -1){
            return t[m][n];
        }
        if (x[n - 1] == y[m - 1]) // if there last index character matches means
                                  // there is a solutiokn
        {
            return t[m][n] =  1 + LCS(x, y, n - 1, m - 1);
        } else {

            return t[m][n] = max(LCS(x, y, n - 1, m), LCS(x, y, n, m - 1));
        }
    }
    int longestCommonSubsequence(string x, string y) {
        // memset(t,-1,sizeof(t));
        int n = x.size();
        int m = y.size();
        t.resize(m+1,vector<int>(n+1,-1));
        return LCS(x, y, n, m);
    }
};