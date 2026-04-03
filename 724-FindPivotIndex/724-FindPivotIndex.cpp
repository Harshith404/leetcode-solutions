// Last updated: 4/3/2026, 7:38:35 PM
class Solution {
public:
    int pivotIndex(vector<int>& a) {
        int sum=0;
        for(int i=0;i<a.size();i++)
        {
            sum+=a[i];
        }
        int left=0;
         if(sum - a[0] == 0)
            { return 0;}
        for(int i=1;i<a.size();i++)
        {
            left+=a[i-1];
            int right=sum-a[i]-left;
            if(left==right)
            {
                return i;
            }
           
        }
         return -1;
    }
};