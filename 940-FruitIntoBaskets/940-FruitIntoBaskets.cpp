// Last updated: 4/3/2026, 7:38:31 PM
class Solution {
public:
    int totalFruit(vector<int>& s) {
        int low=0;
        int res=0;
        int len=0;
        unordered_map<int,int> f;
        for(int high=0;high<s.size();high++)
        {   f[s[high]]++;
            while(f.size()>2)
            {
                f[s[low]]--;
                if(f[s[low]]==0)
                {
                    f.erase(s[low]);
                }
                low++;
            }            
            len=high-low+1;
            res=max(len,res);

        }
        return res;
    }
};