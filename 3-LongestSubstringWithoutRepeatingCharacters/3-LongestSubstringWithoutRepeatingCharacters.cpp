// Last updated: 4/3/2026, 7:39:32 PM
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>f;
        int low=0;
        int res=0;
        int k=0;
        for(int high=0;high<s.size();high++)
        {
                f[s[high]]++;
                 k=high-low+1;
                while(f.size()<k)
                {
                    f[s[low]]--;
                    if(f[s[low]]==0)
                    {
                        f.erase(s[low]);
                    }
                    low++;
                    k=high-low+1;
                }
        
        int len=0;
        len=high-low+1;
        res=max(res,len);
        }
        return res;
    }
};