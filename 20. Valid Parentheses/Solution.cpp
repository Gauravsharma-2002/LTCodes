class Solution {
public:
    bool isValid(string s) {
        // making it with stack
        int size = s.size();
        stack<char> st;
        for (int i = 0; i < size; i++) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[')
                st.push(s[i]);
            else {
                if (st.empty())
                    return false;
                char tp = st.top();
                st.pop();
                if ((s[i] == ')' && tp != '(') || (s[i] == '}' && tp != '{') ||
                    (s[i] == ']' && tp != '[')) return false;
            }
        }
        return st.empty();
    }
};