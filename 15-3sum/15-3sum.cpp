// Last updated: 4/3/2026, 7:39:19 PM
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& a) {
        sort(a.begin(), a.end());
        int n= a.size();
        vector<vector<int>>result;
        for(int i=0;i<n-2;i++)
        {
            if(i>0 and a[i]==a[i-1])
            {continue;}
            int left=i+1;
            int right=n-1;
            int sum=-1*a[i];
            while(left<right)
            {
                int s=a[left]+a[right];
                if(s==sum)
                {   result.push_back({a[i],a[left],a[right]});
                    left++;
                    right--;
                
                while(left<n and a[left]==a[left-1])
                {
                    left++;
                }
                while(right>=0 and a[right]==a[right+1])
                {
                    right--;
                }
                }
                if(s<sum)
                {
                    left++;
                }
                else if(s>sum)
                    {
                        right--;
                    }
                
                
            }

        }
        return result;
    }
};