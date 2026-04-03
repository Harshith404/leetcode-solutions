// Last updated: 4/3/2026, 7:39:34 PM
class Solution {
public:
    vector<int> twoSum(vector<int>& a, int target) {
        unordered_map<int,int>f;
        int n=a.size();
        int need=0;
        for(int i=0;i<n;i++)
        {
           
            need=target-a[i];
            if(f.count(need))
            {
                return {i,f[need]};
            }
             f[a[i]]=i;      
        }
        return{};
    }
};
//checking