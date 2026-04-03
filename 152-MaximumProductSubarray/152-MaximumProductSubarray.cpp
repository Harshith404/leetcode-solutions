// Last updated: 4/3/2026, 7:38:55 PM
class Solution {
public:
    int maxProduct(vector<int>& a) {
        int minend=a[0];
        int maxend=a[0];
        int res=a[0];
        for(int i=1;i<a.size();i++)
        {
            int v1=a[i];
            int v2=minend*a[i];
            int v3=maxend*a[i];
             minend=min(v1,min(v2,v3));
             maxend=max(v1,max(v2,v3));
            res=max(res,max(minend,maxend));       
        }
        return res;
    }
};