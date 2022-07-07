//T.C = O(n logn)
//S.C = O(1)

sort the array

vector<vector<int>> merge(vector<vector<int>>& intervals) {
    sort(intervals.begin(), intervals.end());
    vector<vector<int>>res;
    vector<int>temp = intervals[0];
    for(int i=1; i<intervals.size(); i++)
    {
        if(temp[1] >= intervals[i][0])
        {
            temp[0] = min(intervals[i][0], temp[0]);
            temp[1] = max(intervals[i][1], temp[1]);
        }
        else{
            res.push_back(temp);
            temp = intervals[i];
        }
    }
    res.push_back(temp);
    return res;
}