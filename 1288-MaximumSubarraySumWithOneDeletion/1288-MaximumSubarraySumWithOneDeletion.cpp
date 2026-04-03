// Last updated: 4/3/2026, 7:38:24 PM
class Solution {
public:
    int maximumSum(vector<int>& a) {
        int n=a.size();
        int i;
        int power=0;
        int nopower=a[0];
        int res=a[0];

        for(int i=1;i<n;i++)
        {
            int v1=a[i];
            int v2=nopower+a[i];
            int v3=power+a[i];
            int v4=nopower;
            res = max(res, max(max(v1,v2), max(v3,v4)));
            nopower=max(v1,v2);
            power=max(v3,v4);
        }
        return res;
    }
};