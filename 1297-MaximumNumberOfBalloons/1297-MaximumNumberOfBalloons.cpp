// Last updated: 4/3/2026, 7:38:23 PM
class Solution {
public:
    int maxNumberOfBalloons(string s) {
    unordered_map<char,int>have;
    for(int i=0;i<s.size();i++)
    {
        have[s[i]]++;
    }    
    unordered_map<char,int>need;
    need['b']=1;
    need['a']=1;
    need['l']=2;
    need['o']=2;
    need['n']=1;
    return fun(have,need);    
    }
   int fun(unordered_map<char,int>have,unordered_map<char,int>need)
    {
        int res=INT_MAX;
        for(auto i:need)
        {
            char c=i.first;
            int fneed=i.second;
            int fhave=have[c];
            int times=fhave/fneed;
            res=min(res,times);
        }
        return res;
    }
};