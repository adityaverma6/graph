#include<bits/stdc++.h>
using namespace std;
int main()
{
    // //unweighted undirectd graph
    // int vortex,edge;
    // cin >> vortex >> edge;
    // vector<int>adjlist[vortex];
    // int u,v;
    // for (int  i = 0; i < edge; i++)
    // {
    //     cin >> u >> v;
    //     adjlist[u].push_back(v);
    //     adjlist[v].push_back(u);
    // }
    // for (int i = 0; i <vortex; i++)
    // {
    //     cout << i << "->";
    //     for (int  j = 0; j < adjlist[i].size(); j++)
    //     {
    //         cout << adjlist[i][j] << " ";
    //     }
    //     cout  << endl;
    // }
    
    //weighted undirectd graph
    int vortex,edge;
    cin >> vortex >> edge;
    vector<pair<int,int> >adjlist[vortex];
    int u,v,weight;
    for (int  i = 0; i < edge; i++)
    {
        cin >> u >> v >> weight;
        adjlist[u].push_back(make_pair(v,weight));
        adjlist[v].push_back(make_pair(u,weight));
    }
    for (int i = 0; i <vortex; i++)
    {
        cout << i << "-> ";
        for (int  j = 0; j < adjlist[i].size(); j++)
        {
            cout << "(" << adjlist[i][j].first << " ,"<< adjlist[i][j].second << ") " <<" ";
        }
        cout  << endl;
    }
}