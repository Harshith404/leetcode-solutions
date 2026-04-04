// Last updated: 4/5/2026, 12:07:51 AM
class Solution {
public:
    int search(vector<int>& a, int target) {
        int low=0;
        int high=a.size()-1;
        while(low<=high)
        {
            int guess=(low+high)/2;
            if(a[guess]==target)
            {
                return guess;
            }
            if(a[guess]<target)
            {
                low=guess+1;
            }
            else
            {
                high=guess-1;
            }
        }
        return -1;
    }
};