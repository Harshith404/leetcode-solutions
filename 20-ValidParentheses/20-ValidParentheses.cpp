// Last updated: 4/3/2026, 7:39:16 PM
class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(int i=0;i<s.length();i++)
        {
            if((s[i]=='(') or (s[i]=='[') or (s[i]=='{'))
            {
                st.push(s[i]);
            }
            else{
           if(st.empty())
            {
                return false;
            }
            if(s[i]==')' and st.top()=='(')
            {
                st.pop();
            }
            else if(s[i]==']' and st.top()=='[')
            {
                st.pop();
            }
            else if(s[i]=='}' and st.top()=='{')
            {
                st.pop();
            }
            else if(!st.empty())
            {
                return false;
            }
            }
        }
        if(st.empty())
        {
            return true;
        }
        else{
        return false;
        }
    }
};