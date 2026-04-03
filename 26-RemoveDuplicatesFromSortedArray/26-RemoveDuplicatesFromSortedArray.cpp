// Last updated: 4/3/2026, 7:39:11 PM
class Solution {
public:
    int removeDuplicates(vector<int>& a) {
        vector<int>res;
        for(int i=0;i<a.size();i++)
        {
            if(i>0 and a[i]==a[i-1])
            {
                continue;
            }
            res.push_back(a[i]);
        }
        int k=res.size();
        for(int i=0;i<k;i++)
        {
            a[i]=res[i];
        }
        return  k;
    }
};