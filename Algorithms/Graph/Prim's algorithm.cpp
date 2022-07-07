#include<bits/stdc++.h>
using namespace std;

int main()
{
    int parent[n];  
    int key[n];
    int mstSet[n];
    
    for(int i=0; i<n; i++)
    {
        key[i] = INT_MAX;
        mstSet[i] = false;
    }
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>>pq;
    pq.push({0, 0});
    key[0] = 0; parent[0] = -1;
    while(!pq.empty())
    {
        int u = pq.top().second;    pq.pop();
        for(auto it: adj[u])
        {
            int v = it.first;   int wt = it.second;
            if(mstSet[v] == false && wt < key[v])
            {
                parent[v] = u;  key[v] = wt;
                pq.push({key[v], v});
            }
            
        }
    }
    for(int i=0; i<n; i++)
    {
        cout<<key[v]<<" ";
    }
}