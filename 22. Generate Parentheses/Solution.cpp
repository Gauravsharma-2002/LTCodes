class Solution {
    // you did a mistake of not passing ans array refference that case the empty array in solution 
    void solution(vector<string>&arr,int open,int close,string s){
        if(open==0 && close==0){
            arr.push_back(s);
            return;
        }

        if(open>0 ) solution(arr,open-1,close,s+'(');
        if(close>open) solution(arr,open,close-1,s+')');
        return;

        
    }
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        solution(ans,n,n,"");
        return ans;
        
    }
};