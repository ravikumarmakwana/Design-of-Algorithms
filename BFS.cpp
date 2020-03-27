#include<iostream>
using namespace std;
main()
{
    int cost[10][10],Q[10],visit[10],visited[10];
    int m,n;
    cout<<"Enter the Number of Nodes : ";
    cin>>n;
    cout<<"Enter the Total Edges :: ";
    cin>>m;
    cout <<"Enter the edges \nSource->Destion\n";
    int i,j,f,r,v;

    for(int k=1;k<=m;k++)
    {
        cin>>i>>j;
        cost[i][j]=1;
    }

    cout<<"Enter Stating Node :: ";
    cin>>v;
    cout<<"BFS Tree ::: ";
    cout <<v;
    visited[v]=1;
    int k=1;
    while(k<n)
    {
        for(j=1;j<=n;j++)
        {
            if(cost[v][j]!=0 && visited[j]!=1 && visit[j]!=1)
            {
                visit[j]=1;
                Q[r++]=j;
            }
            v=Q[f++];
            cout<<v<<" ";
            k++;
            visit[v] = 0;
            visited[v] = 1;
        }
    }
    return 0;
}
