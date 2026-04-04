// Last updated: 4/5/2026, 12:08:10 AM
class Solution {
public:
    vector<int> searchRange(vector<int>& a, int target) {
        int low=0,high=a.size()-1;
        int res=-1;
        vector<int>result;
        while(low<=high)
        {
            int guess=(low+high)/2;
            if(a[guess]<target)
            {
                low=guess+1;
            }
            else if(a[guess]>target)
            {
                high=guess-1;
            }
            else{
                res=guess;
                high=guess-1;
            }
        }
        result.push_back(res);//starting position
        low=0,high=a.size()-1;
        res=-1;
        while(low<=high)
        {
            int guess=(low+high)/2;
            if(a[guess]<target)
            {
                low=guess+1;
            }
            else if(a[guess]>target)
            {
                high=guess-1;
            }
            else{
                res=guess;
                low=guess+1;
            }
        }
         result.push_back(res);//ending position

         return result;
    }
};