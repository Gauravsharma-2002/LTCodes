class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = strs[0];
        // string temp="";
        int size = strs.size();
        if(size == 0 ) return "";
        if(size==1) return strs[0];
        for(int j=1;j<size;j++){
            int sizeJ = min(ans.size(),strs[j].size());
            int i=0;
            while(i<sizeJ){
                if(ans[i]!=strs[j][i]) break;

                i++;
            }
            ans= ans.substr(0,i); // this returns the new string not manipulates the given one 
            if(ans.empty()) break;
        }
        return ans;
    }
};