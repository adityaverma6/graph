#include <bits/stdc++.h>
using namespace std;
int main()
{
    // adjacency matrix
    // undirected unweighted graph

    // int vertex, edge;
    // cin >> vertex >> edge;
    // vector<vector<int>> adjmat(vertex, vector<int>(vertex, 0));
    // int u, v;
    // for (int i = 0; i < edge; i++)
    // {
    //     cin >> u >> v;
    //     adjmat[u][v] = 1;
    //     adjmat[v][u] = 1;
    // }
    // for (int i = 0; i < vertex; i++)
    // {
    //     for (int j = 0; j < vertex; j++)
    //     {
    //         cout << adjmat[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    // undirected weighted graph
    
    // int vertex, edge;
    // cin >> vertex >> edge;
    // vector<vector<int>> adjmat(vertex, vector<int>(vertex, 0));
    // int u, v, weight;
    // for (int i = 0; i < edge; i++)
    // {
    //     cin >> u >> v >> weight;
    //     adjmat[u][v] = weight;
    //     adjmat[v][u] = weight;
    // }
    // for (int i = 0; i < vertex; i++)
    // {
    //     for (int j = 0; j < vertex; j++)
    //     {
    //         cout << adjmat[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // directed unweighted graph
    
    // int vertex, edge;
    // cin >> vertex >> edge;
    // vector<vector<int>> adjmat(vertex, vector<int>(vertex, 0));
    // int u, v;
    // for (int i = 0; i < edge; i++)
    // {
    //     cin >> u >> v ;
    //     adjmat[u][v] = 1;
    // }
    // for (int i = 0; i < vertex; i++)
    // {
    //     for (int j = 0; j < vertex; j++)
    //     {
    //         cout << adjmat[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // directed weighted graph
    
    int vertex, edge;
    cin >> vertex >> edge;
    vector<vector<int>> adjmat(vertex, vector<int>(vertex, 0));
    int u, v, weight;
    for (int i = 0; i < edge; i++)
    {
        cin >> u >> v >> weight;
        adjmat[u][v] = weight;
    }
    for (int i = 0; i < vertex; i++)
    {
        for (int j = 0; j < vertex; j++)
        {
            cout << adjmat[i][j] << " ";
        }
        cout << endl;
    }
}