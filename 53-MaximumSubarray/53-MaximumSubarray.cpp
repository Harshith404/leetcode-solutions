// Last updated: 4/3/2026, 7:39:10 PM
class Solution {
public:
    int maxSubArray(vector<int>& a) {
        int best=a[0];
        int res=a[0];
        for(int i=1;i<a.size();i++)
        {
            int v1=a[i];
            int v2=best+a[i];
            best=max(v1,v2);
            res=max(res,best);
        }
        return res;
    }
};