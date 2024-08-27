class Solution {
public:
    // vector<vector<int>>t;
    int t[501][501];
    int LCS(string& x , string& y, int n ,int m){
        // for(int i=0;i<=n;i++){
        //     for(int j=0;j<=m;j++){
        //         if(i ==0 || j==0) t[i][j]=0;
        //     }
        // }

        // for(int i =1;i<=n;i++){
        //     for(int j=1;j<=m;j++){
        //         if(x[i-1] == y[j-1]){
        //             t[i][j] = t[i-1][j-1];
        //         }
        //         else{
        //             t[i][j] = max(t[i-1][j],t[i][j-1]);
        //         }
        //     }
        // }
        // return t[n][m];
          for (int i = 0; i <= n; i++) {
            for (int j = 0; j <= m; j++) {
                if (i == 0 || j == 0)
                    t[i][j] = 0;
            }
        }
        // decision tree

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {

                if (x[i - 1] == y[j - 1]) {
                    t[i][j] = 1 + t[i - 1][j - 1];
                } else {
                    t[i][j] = max(t[i - 1][j], t[i][j - 1]);
                }
            }
        }
        return t[n][m];

    }
    int minDistance(string word1, string word2) {


        // before every thing initialise the t
        // i think i have to find the minimum that can be done to make both word same 
        // so i think that we may either change word1 to word2 or word2 to word1
        // both thing might be possible 

        // in order to find the minimum what can be done that i can think of is to find the length of lcs for both the string
        //  next what i can do is check for both the string which gives me minimum ans

        int n = word1.size();
        int m = word2.size();
        // t.resize(n,vector<int>(m,-1));
        int lcsLength = LCS(word1,word2,n,m);
        // if(n>=m)
           
        // else 
        

        return (n-lcsLength)+(m-lcsLength);       
    }
};