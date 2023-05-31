#include<bits/stdc++.h>
using namespace std;

int main()
{
    int node = 4;
    int edge;
    cin>>edge;
    int matrix[node][node]={};

/*   for(int i=0; i<node; i++)
    {
        for(int j=0; j<node; j++)
         matrix[i][j] = 0;
    }
    
*/  
 /*INitialize  
    matrix[0][1] = 1;
    matrix[1][0] = 1;
    matrix[1][2] = 1;
    matrix[2][1] = 1;
    matrix[1][3] = 1;
    matrix[3][1] = 1;
    matrix[2][3] = 1;
    matrix[3][2] = 1;
*/
//input
    for(int i=0; i<edge;i++)
    {
        int u,v;
        cin>>u>>v;
        matrix[u][v] = 1;
        matrix[v][u] = 1;
    }    
    for(int i=0; i<node; i++)
    {
        for(int j=0; j<node; j++)
         cout<< matrix[i][j]<<" ";
        cout<<"\n";  
    }
   
}