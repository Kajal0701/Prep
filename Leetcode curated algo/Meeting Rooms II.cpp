int minMeetingRooms(vector<vector<int>>& intervals) {
    vector<int>arr;
    vector<int>depart;
    for(int i=0; i<intervals.size(); i++)
    {
        arr.push_back(intervals[i][0]);
        depart.push_back(intervals[i][1]);
    }
    sort(arr.begin(), arr.end());
    sort(depart.begin(), depart.end());
    priority_queue<int, vector<int>, greater<int>>pq;
    int ans = 0;
    for(int i=0; i<arr.size(); i++)
    {
        while(!pq.empty() && pq.top() <= arr[i])
        {
            pq.pop();
        }
        pq.push(depart[i]);
        if(pq.size() > ans)
        {
            ans = pq.size();
        }
    }
    return ans;
}


int minMeetingRooms(vector<vector<int>>& intervals) {
    vector<int>arr;
    vector<int>depart;
    for(int i=0; i<intervals.size(); i++)
    {
        arr.push_back(intervals[i][0]);
        depart.push_back(intervals[i][1]);
    }
    sort(arr.begin(), arr.end());
    sort(depart.begin(), depart.end());
    int i=0;    int j = 0;  int ans = 0;
    while(i < arr.size() && j < depart.size())
    {
        while(depart[j] <= arr[i])
        {
            j++;
        }
        if(i-j+1 > ans)
        {
            ans = i-j+1;
        }
        i++;
    }
    return ans;
}

