#include<bits/stdc++.h>
using namespace std;
int main()
{
    int node, edge;
    cin>>node>>edge;

    vector<int>adj_list[node+ 1];

    for(int i=0; i<edge; i++)
    {
        int u, v;
        cin>>u>>v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }

    for(int i=0; i<node; i++)
    {
        cout<<i<<"-->";
        for(auto it: adj_list[i])
         cout<< it<<",";
        cout<<"\n"; 
    }

}
