class Solution {
public:
    int t[1001][1001];
    int LCS(string x, string y, int n, int m) {
        for (int i = 0; i <= n; i++) {
            for (int j = 0; j <= m; j++) {
                if (i == 0 || j == 0) {
                    t[i][j] = 0;
                }
            }


        }

        // now decision tree
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(x[i-1] == y[j-1]){
                    t[i][j] = 1+t[i-1][j-1];
                }
                else{
                    t[i][j] = max(t[i-1][j], t[i][j-1]);
                }
            }
        }
       return t[n][m];
    }
    int longestPalindromeSubseq(string s) {
        // this one is challange as you cant think of that is variation of LCS
        // the catch here is that we only had given a single string in input
        // what to be done here now
        // can we derive the second string ?
        // as the question is given that there is plaindromic subsequence means
        // that there is the thing that is if we reverse the given input sttring
        // we be sure have that plaindromic subsequence

        // yes this is the  thing lests do it this way

        // string s1 = reverse(s.begin(), s.end());
        int n = s.size();
        string s1(s.rbegin(),s.rend());
        // int m = n;
        return LCS(s, s1, n, n);
    }
};