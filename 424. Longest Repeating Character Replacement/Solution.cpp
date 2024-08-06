class Solution {
public:
    int characterReplacement(string s, int k) {
        int size = s.size();
        int i =0,j=0;
        int ans = 0;
        int maxFreq = 0;
        vector<int> temp(26,0);
        while(j<size){
            temp[s[j]-'A']++;
            maxFreq = max (maxFreq,temp[s[j]-'A']);
            
            if((j-i+1 - maxFreq)<=k){
                ans = max(ans,(j-i+1));
                j++;
            }
            else  if ((j-i+1 - maxFreq) > k){

                temp[s[i]-'A']--;
                i++;
                j++ ;  // this takes a whole lot of time to get fixed 
             }
        }
        return ans;
    }
};