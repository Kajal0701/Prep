int shortestPath(int n, int src, vector<vector<int>>& edges)
{ 
	int m = edges.size();
	vector<int>adj[n+1];
	for(int i=0; i<m; i++)
	{
		adj[edges[i][0]].push_back(edges[i][1]);
		adj[edges[i][1].push_back(edges[i][0]]);
	}
	
	queue<pair<int, int>>q;
	vector<int>d(n+1, INT_MAX);

	q.push({src, 0});	d[src] = 0;
	while(!q.empty())
	{
		auto top = q.front();	q.pop();
		int node = top.first;	int dist = top.second;
		for(auto it: adj[node])
		{
			if(dist + 1 < d[it.first])
			{
				d[it.first] = dist+1;
				q.push({it.first, d[it.first]});
			}
		}
	}
	for(int i=0; i<n; i++)
	{
		cout<<d[i]<<" ";
	}
	

}