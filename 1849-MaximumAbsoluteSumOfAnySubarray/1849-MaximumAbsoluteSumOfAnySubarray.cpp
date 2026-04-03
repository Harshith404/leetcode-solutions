// Last updated: 4/3/2026, 7:38:21 PM
class Solution {
public:
    int maxAbsoluteSum(vector<int>& a) {
        int minsum=a[0];
        int maxsum=a[0];
        int res=abs(a[0]);
        for(int i=1;i<a.size();i++)
        {   
            maxsum= max(a[i],maxsum+a[i]);
            minsum= min(a[i],minsum+a[i]);
            res=max(abs(res),max(abs(minsum),abs(maxsum)));
        }
        return res;
    }
};