// Last updated: 4/3/2026, 7:38:29 PM
class Solution {
public:
    int subarraysDivByK(vector<int>& a, int k) {
        int sum=0;
        int ans=0;
        unordered_map<int,int>f;
        f[0]++;
        for (int i=0;i<a.size();i++)
        {
            sum+=a[i];
           int rem=sum%k;
           if(rem<0)
           {
            rem=rem+k;
           }
            ans+=f[rem];
            f[rem]++;
        }

        return ans;
    }
};