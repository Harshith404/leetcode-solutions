// Last updated: 4/3/2026, 7:39:17 PM
class Solution {
public:
    int threeSumClosest(vector<int>& a, int target) {
        sort(a.begin(),a.end());
        int n=a.size();
        int max_diff=1e9;
        int resultsum=a[0]+a[1]+a[2];
        int sum =0;
        for(int i=0;i<n-2;i++)
        {
            if(i>0 and a[i]==a[i-1])
            {continue;}
        int left=i+1;
        int right=n-1;
        
        while(left<right){
            sum=a[i]+a[left]+a[right];
        int diff=abs(sum-target);
            if(diff<max_diff)
            {
                max_diff=diff;
                resultsum=sum;
            }
        if(sum==target)
        {
            left++;
            right--;
        }
        else if(sum<target)
        {
            left++;
        }
        else
        {
            right--;
        }

        }}
        return resultsum;
    }
};