class Solution {
public:
    string reverseWords(string s) {
    // s+=" ";
    int start =0;
    int end = s.size()-1;
    while(start<=end && s[start]==' ') start++;
    while(end>=start && s[end]==' ') end--; 
    stack<string> st;
    int i;
    string str="";
    for(i=start;i<=end;i++)
    {
        if(s[i]==' ')
        {
            if(!str.empty()){
                st.push(str);
            str="";
            }
        }
        else str+=s[i];
    }
    if(!str.empty()){
        st.push(str);
    }
    string ans="";
    while(!st.empty())
    {
        ans+=st.top();
        st.pop();
        if(!st.empty()){
            ans+=" ";
        }
    
    }
  
       
        return ans;
        
    }
};