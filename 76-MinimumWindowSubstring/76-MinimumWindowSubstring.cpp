// Last updated: 4/3/2026, 7:39:01 PM
class Solution {
public:
    bool sahi(int have[],int need[])
    {
        for(int i=0;i<256;i++)
        {
            if(have[i]<need[i])
            {
                return false;
            }
            
        }
        return true;
    }

    string minWindow(string s, string t) {
        int low=0;
        int res=INT_MAX;
        int m=s.size();
        int n=t.size();
        int have[256]={0};
        int need[256]={0};
        int start=0;
        for(int i=0;i<n;i++)
        {
            need[t[i]]++;
        }
        int len=0;
        for(int high=0;high<m;high++)
        {
            have[s[high]]++;
            while(sahi(have,need))
            {   len=high-low+1;
                if(res>len)
                {
                    res=len;
                    start=low;
                }
                have[s[low]]--;
                low++;
            }
        }
        if(res==INT_MAX)
        {
            return "";
        }
        return s.substr(start,res);
    }
};