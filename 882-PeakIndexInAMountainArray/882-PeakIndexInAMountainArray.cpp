// Last updated: 4/6/2026, 1:56:38 AM
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& a) {
        int n=a.size();
        int low=0;
        int high=n-1;
        int res=-1;
        while(low<=high)
        {
            int guess=(low+high)/2;
            if(a[guess]<a[guess+1])
            {
                low=guess+1;
            }
            else{
                res=guess;
                high=guess-1;
            }
        }
        return res;
    }
};