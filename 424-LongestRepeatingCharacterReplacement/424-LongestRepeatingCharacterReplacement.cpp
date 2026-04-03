// Last updated: 4/3/2026, 7:38:39 PM
class Solution {
public:
int find(int f[]) {
    int maxcnt = 0;
    for (int i = 0; i < 256; i++) {
        maxcnt = max(maxcnt, f[i]);
    }
    return maxcnt;
}
    int characterReplacement(string s, int k) {
        int low=0;
        int f[256]={0};
        int len=0;
        int maxcnt=0;
        int diff=0;
        int res= INT_MIN;
        for(int high=0;high<s.size();high++)
        {
            f[s[high]]++;
            len=high-low+1;
            maxcnt=find(f);
            diff=len-maxcnt;
            while(diff>k)
            {
                f[s[low]]--;
                low++;
                len=high-low+1;
                maxcnt=find(f);
                diff=len-maxcnt;
            }
            len=high-low+1;
            res=max(res,len);
        }
        return res;
    }
};