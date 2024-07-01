class Solution {
    void solution(vector<string>& arr,int open,int close,string op){
        if(open==0 && close==0){
            arr.push_back(op);
            return ;

        }

        //  i have option to add open to output string every time until openCnt >0
        if(open!=0){
            string op1 = op;
            op1.push_back('(');
            solution(arr,open-1,close,op1);
        }

        if(close> open){
            string op2 = op;
            op2.push_back(')');
            solution(arr,open,close-1,op2);
        }
        return ;
    }
public:

    vector<string> generateParenthesis(int n) {
        int open = n;
        int close = n;
        vector<string> arr;
        string otp = "";
        solution(arr,open,close,otp);
        return arr;
        
    }
};