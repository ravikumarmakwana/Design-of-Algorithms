#include<iostream>
using namespace std;
int n=6;
int N[6][6]={
            {100,4,3,5,100,100},
            {4,100,6,100,3,100},
            {3,6,100,4,8,100},
            {5,100,4,100,5,6},
            {100,3,8,5,100,7},
            {100,100,100,6,7,100}
            };
int PrimsAlgorithm()
{
    int u,v,mincost=0,m,ne=0,V[n]={0};
    V[0]=1;
    cout<<"Minimum Spanning Tree:\n";
    while(ne < n -1)
    {
       m=100;
       for(int i=0;i<n;i++)
       {
            if(V[i]==1)
            {
                for(int j=0;j<n;j++)
                {
                    if(V[j]==0)
                    {
                        if(m > N[i][j])
                        {
                            m=N[i][j];
                            u=i;
                            v=j;
                        }
                    }
                }
            }
        }
        V[v]=1;
        mincost+=m;
        cout<<"\n"<<u+1<<" -- "<<v+1<<" : "<<m;
        ne++;
    }
    return mincost;
}
main()
{
    cout<<"Prims Algorithm"<<endl;
    int n=PrimsAlgorithm();
    cout<<"\n\nMinMum Cost :: "<<n<<endl;
    return 0;
}
