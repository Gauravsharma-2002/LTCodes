class Solution {
public:
    int t[501][501];
    int LCS(string x, string y, int n, int m) {
        for (int i = 0; i <= n; i++) {
            for (int j = 0; j <= m; j++) {
                if (i == 0 || j == 0) {
                    t[i][j] = 0;
                }
            }
        }

        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(x[i-1] == y[j-1]){
                    t[i][j] = 1+ t[i-1][j-1];
                }
                else{
                    t[i][j] = max(t[i-1][j],t[i][j-1]);
                }
            }
        }
        return t[n][m];
    }
    int minInsertions(string s) {

        // what i think here is that   size of s -  length of largest
        // palindromic subsequence hadn't gone to tutorial yet
        int n = s.size();
        string s1(s.rbegin(),s.rend());
        int largestPlaindromicSubsequneceLength = LCS(s,s1,n,n);
        return n - largestPlaindromicSubsequneceLength;

    }
};