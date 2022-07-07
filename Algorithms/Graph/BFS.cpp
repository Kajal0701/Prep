void bfstraversal(int n, vector<vector<int>>& edges)
{
	int m = edges.size();
	vector<int>adj[n+1];
	for(int i=0; i<m; i++)
	{
		adj[edges[i][0]].push_back(edges[i][1]);
		adj[edges[i][1].push_back(edges[i][0]]);
	}
	vector<int>vis(n+1, 0);
	
	queue<int>q;
	q.push(0);
	while(!q.empty())
	{
		int node = q.front();	q.pop();
		cout<<node<<" ";
		for(auto it: adj[node])
		{
			if(!vis[it])
			{
				q.push(it);
			}
		}
	}

}