// Last updated: 4/3/2026, 7:38:30 PM
class Solution {
public:
    int maxSubarraySumCircular(vector<int>& a) {
        int maxsum=a[0];
        int res=a[0];
        int minsum=a[0];
        int total=a[0];
        int res1=a[0];
        int res2=a[0];
        for(int i=1;i<a.size();i++)
        {
            int oldsum = maxsum;
            maxsum=max(oldsum+a[i],a[i]);
            res1=max(res1,maxsum);
        }
        for(int i=1;i<a.size();i++)
        {
            int oldminsum = minsum;
            minsum=min(oldminsum+a[i],a[i]);
            res2=min(res2,minsum);
        }
         for(int i=1;i<a.size();i++)
        {
            total+=a[i];
        }
        int notbekar=total-res2;
        if(res1<0)
            return res1;
        res=max(res1,notbekar);
        return res;
    }
};