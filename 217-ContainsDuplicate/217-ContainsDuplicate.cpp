// Last updated: 4/3/2026, 7:38:49 PM
class Solution {
public:
    bool containsDuplicate(vector<int>& a) {
        unordered_map<int,int>f;
        for(int i=0;i<a.size();i++)
        {   if(f.count(a[i]))
                return true;    
            f[a[i]]++;
        }
        return false;
    }
};