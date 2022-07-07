#include<bits/stdc++.h>
using namespace std;


void flyodWarshall(vector<vector<int>>& dist)
{
    int n = dist.size();
    for(int k=0; k<n; k++)
    {
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(dist[i][k]== INT_MAX || dist[k][j] == INT_MAX)
                {
                    continue;
                }
                if(dist[i][k] + dist[k][j] < dist[i][j])
                {
                    dist[i][j] = dist[i][k] + dist[k][j];
                }
            }
        }
    }
    
   
    
    for(int i=0; i<n; i++)
    {
        if(dist[i][i]< 0 )
        {
            cout<<"negative cycle";
            return;
        }  
    }
     for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<dist[i][j]<<" ";
        }
        cout<<endl;
    }
}


int main()
{
    int n, m;
    cin>>n>>m;
    vector<pair<int, int>>adj[n];
    for(int i=0; i<m; i++)
    {
        int a,b,wt;    cin>>a>>b>>wt;
        adj[a].push_back({b, wt});
    }
    
    vector<vector<int>>dist(n, vector<int>(n, INT_MAX));
    for(int i=0; i<n; i++)
    {
        for(auto it: adj[i])
        {
            dist[i][it.first] = it.second;
            dist[i][i] = 0;
        }
    }
    
    flyodWarshall(dist);
    
}