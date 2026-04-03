// Last updated: 4/3/2026, 7:38:48 PM
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& a, int k) {
        unordered_map<int,int>f;
        bool res=false;
        for(int i=0;i<a.size();i++)
        {   if(f.count(a[i]))
            {
                 int d=abs(f[a[i]]-i);
                 if(d<=k)
                 {res=true;}
            }
            f[a[i]]=i;
        }
        return res;
    }
};