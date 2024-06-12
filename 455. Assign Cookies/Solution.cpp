class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int m = g.size();
        int n= s.size();
        // we need to sort both array 
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int i=0,j=0;
        // two pointer one on array g and one on array s
        // if we satisfy the greed of child we will move both pointer and if we got a child whose greed is greater than current size of cookie we will look for larger cookie in sorted size array
        while(i<m && j <n ){
            if(g[i]<=s[j]){i++;j++;}
            else if(g[i]>s[j]){j++;}

        }
        return i;
    }
};