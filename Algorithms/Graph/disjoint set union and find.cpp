vector<int>parent;
int find(int x)
{
	return parent[x] == x ? x : find(parent[x]);
}

void unionset(vector<vector<int>>& edges)
{
	int n = edges.size();
	parent.resize(n+1, 0);

	for(int i=0; i<=n; i++)
	{
		parent[i] = i;
	}
	for(int i=0; i<n; i++)
	{
		int x = find(edges[i][0]);
		int y = find(edges[i][1]);
		if(x != y)
		{
			parent[y] = x;
		}
	}
}