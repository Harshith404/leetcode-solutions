// Last updated: 4/3/2026, 7:38:50 PM
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& a) {
        int sum=0;
        int low=0;
        int high=0;
        int res=INT_MAX;
        int length =0;
        while(high<a.size())
        {
            sum=sum+a[high];
            while(sum>=target)
            {   length=high-low+1;
                res=min(res,length);
                sum=sum-a[low];
                low++;
            }
            high++;
        }
        if(res==INT_MAX)
        {
            return 0;
        }
        else
            return res;
    }
};