// Last updated: 4/3/2026, 7:38:38 PM
class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& a) {
        stack<int>st;
       
        int n=a.size();
         vector<int>res(n);
        for(int i=n-2;i>=0;i--)
        {
            st.push(a[i]);
        }
        for(int i=n-1;i>=0;i--)
        {
            while(!st.empty() and st.top()<=a[i])
            {
                st.pop();
            }
            if(st.empty())
            {
                res[i]=-1;
            }
            else
            {
                res[i]=st.top();
            }
            st.push(a[i]);
        }
        return res;
    }
};