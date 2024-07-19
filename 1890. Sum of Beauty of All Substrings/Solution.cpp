class Solution {
public:
    int beauty(vector<int>& arr){
        int mf= -1;
        int lf= 1e9;
        for(int i=0;i<26;i++){
            if(arr[i]>0){
            mf = max(mf,arr[i]);
                lf = min(arr[i],lf);
            }
        }
    //    if(lf==1e9) return 0;
       return mf-lf;
    }
    int beautySum(string s) {
        
        int size = s.size();
        int ans = 0;
        for(int i=0;i<size;i++){
            vector<int> v(26,0);
            for(int j=i;j<size;j++){
                v[s[j]-'a']++;
                ans+=beauty(v);
            }
        }
        return ans;
    }
};