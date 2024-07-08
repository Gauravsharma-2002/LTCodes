class Solution {
public:
    bool rotateString(string s, string goal) {
        
        if(s.length() != goal.length()){
            return false;
        }
        queue<char> q1;
        queue<char> q2;
        int size1= s.length();
        // int size2 = goal.length();
        for(int i = 0 ;i<size1;i++){
            q1.push(s[i]);
            q2.push(goal[i]);
        }
        
        int k = size1;
        while(k){
            char temp = q1.front();
            q1.pop();
            q1.push(temp);
            if(q1 == q2) return true;
            k--;
        }
        return false;

    }
};