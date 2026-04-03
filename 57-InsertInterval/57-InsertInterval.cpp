// Last updated: 4/3/2026, 7:39:08 PM
class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>>a;
        bool insert=false;
        for(int i=0;i<intervals.size();i++)
        { int start=intervals[i][0];
            if(insert==false and start>=newInterval[0])
            {
                a.push_back(newInterval);
                insert=true;
            }
            a.push_back({intervals[i][0],intervals[i][1]});
        }
        if(insert==false)
        {
            a.push_back(newInterval);
        }
        //insertion ends here
        vector<vector<int>>res;
        int start1=a[0][0];
        int end1=a[0][1];
        for(int i=1;i<a.size();i++)
        {
            int start2=a[i][0];
            int end2=a[i][1];
            if(end1>=start2)
            {
                start1=start1;
                end1=max(end1,end2);
                continue;
            }
            res.push_back({start1,end1});
            start1=start2;
            end1=end2;
        }
        res.push_back({start1,end1});
        return res;
    }
};