int shortestPath(int n, int src, vector<vector<int>>& edges)
{ 
	int m = edges.size();
	vector<int>adj[n+1];
	for(int i=0; i<m; i++)
	{
		adj[edges[i][0]].push_back({edges[i][1], edges[i][2]});
		adj[edges[i][1].push_back({edges[i][0]], edges[i][2]});
	}

	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>>pq;

	pq.push({0, src});
	vector<int>dist(n+1, INT_MAX);
	dist[src] = 0;
	while(!pq.empty())
	{
		auto topnode = pq.top();	pq.pop();
		int child = topnode.second;	int wt = topnode.first; 
		for(auto it: adj[child])
		{
			if(dist[it.first] > dist[child] + it.second)
			{
				dist[it.first] = dist[child] + it.second;
				pq.push(dist[it.first], it.first);
			}
		}
	}

	for(int i=0; i<n; i++)
	{
		cout<<dist[i];
	}

}