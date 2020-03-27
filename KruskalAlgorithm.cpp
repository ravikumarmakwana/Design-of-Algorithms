#include<iostream>
using namespace std;
int n=6;
int V[6]={0};
int N[6][6]={
                {0,4,3,5,0,0},
                {4,0,6,0,3,0},
                {3,6,0,4,8,0},
                {5,0,4,0,5,6},
                {0,3,8,5,0,7},
                {0,0,0,6,7,0}
            };
int Find(int i)
{
    return V[i];
}
void Merge(int i,int j)
{
    int u=Find(i);
    int v=Find(j);
    if(u>v)
    {
        for(int a=0;a<n;a++)
        {
            if(V[a]==u)
                V[a]=v;
        }
    }
    else
    {
        for(int a=0;a<n;a++)
        {
            if(V[a]==v)
                V[a]=u;
        }
    }
}
void Make_set()
{
    for(int i=0;i<n;i++)
        V[i]=i;
}
void Kruskal()
{
    int mincost=0,m=100,e=0,u,v;
    Make_set();
    while(e<n-1)
    {
        m=100;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(Find(i)!=Find(j) && m>N[i][j] && N[i][j]!=0)
                {
                    m=N[i][j];
                    u=i;
                    v=j;
                }
            }
        }
        N[u][v]=N[v][u]=0;
        cout<<u<<" -- "<<v<<" : "<<m<<endl;
        Merge(u,v);
        mincost+=m;
        e++;
    }
    cout<<"\nMinimum Cost : "<<mincost;
}
main()
{
    int n;
    Kruskal();
    return 0;
}
