class Solution {
public:
    int t[1001][1001];
    int LCS(string& x, string& y, int n,int m){
        // initialtion 
        for(int i=0;i<=n;i++){
            for(int j=0;j<=m;j++){
                if(i ==0 || j==0){
                    t[i][j]=0;
                }
            }
        }
        // decision tree 
        for(int i =1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(x[i-1] == y[j-1]){
                    t[i][j] = 1+ t[i-1][j-1];
                }
                else{
                    t[i][j] = max(t[i-1][j],t[i][j-1]);
                }
            }
        }
        // returning 
        return t[n][m];
    }
    void printSCS(string& s,string& x,string& y){
        int i= x.size();
        int j= y.size();

        while(i>0 && j>0){
            if(x[i-1] == y[j-1]){
                s.push_back(x[i-1]);
                i--;j--;
            }
            else{
                if(t[i-1][j] > t[i][j-1]){
                    s.push_back(x[i-1]);
                    i--;
                }
                else{
                    s.push_back(y[j-1]);
                    j--;

                }
            }
        }
    while(i>0){
        s.push_back(x[i-1]);
        i--;
    }
    while(j>0) {
        s.push_back(y[j-1]);
        j--;
    }

    }
    string shortestCommonSupersequence(string str1, string str2) {
        int n = str1.size();
        int m = str2.size();
        int lcsLength = LCS(str1,str2,n,m);
        string ans = "";
        printSCS(ans,str1,str2);
        reverse(ans.begin(),ans.end());
        return ans;




        // return n+m-lcsLength;
    }
};