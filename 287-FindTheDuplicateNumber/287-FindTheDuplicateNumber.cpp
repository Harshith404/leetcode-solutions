// Last updated: 4/3/2026, 7:38:47 PM
class Solution {
public:
    int findDuplicate(vector<int>& a) {
        int slow=0;
        int fast =0;
        while(true)
        {
            slow=a[slow];
            fast=a[fast];
            fast=a[fast];
            if(slow==fast)
            {
                slow=0;
                while(slow!=fast)
                {
                    slow=a[slow];
                    fast=a[fast];
                }
                return slow;
            }
        }
        return -1;
    }
};