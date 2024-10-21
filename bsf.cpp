//  1.i/p={ans,visited,qeue}
//  2.pop anode from queue and put in ans
//  3.node will look into unvisited neboure
//  4.push them into qeue
//  5.mark visited them as qeue


#include<bits/stdc++.h>
using namespace std;
vector<int>BFSgraph(int v,vector<int>adj[])
{
    queue<int>q;
    vector<bool>visited(v,0);
    visited[0]=1;
    vector<int>ans;
    while(!q.empty())
    {
        int node=q.front();
        q.pop();
        ans.push_back(node);
        for (int i = 0; i < adj[node].size(); i++)
        {
            if(!visited[adj[node][i]])
            {
                visited[adj[node][i]]=1;
                q.push(adj[node][i]);
            }
        }
        
    }
    return ans;
}

