// Last updated: 4/3/2026, 7:38:25 PM
class Solution {
public:
    /*int find(int f[])
    {   int maxcnt =0;
        for(int i=0;i<2;i++)
        {
            maxcnt=max(maxcnt,f[i]);
        }
        return maxcnt;
    }*/
    int longestOnes(vector<int>& a, int k) {
        int f[2]={0};
        int low=0;
        int len=0;
        int maxcnt=0;
        int diff=0;
        int res =0;
        for(int high=0;high<a.size();high++)
        {
            f[a[high]]++;
            len=high-low+1;
            maxcnt=f[1];
            diff=len-maxcnt;
            while(diff>k)
            {
                f[a[low]]--;
                low++;
                len=high-low+1;
                maxcnt=f[1];
                diff=len-maxcnt;
            }
            len=high-low+1;
            res=max(len,res);
        }return res;
    }
};