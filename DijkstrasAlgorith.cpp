#include<iostream>
using namespace std;
int m=100;
void Dijkstra()
{
    int n;
    cout<<"Enter the Number of Nodes : ";
    cin>>n;
    int N[n][n];
    cout<<"Enter the All Distances :\n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cin>>N[i][j];
    }
    int a[n],b[n],ae=n;
    for(int i=0;i<n;i++)
    {
        a[i]=b[i]=N[0][i];
    }
    int mno,p;
    while(ae>1)
    {
       mno=m;
       for(int i=0;i<n;i++)
       {
           if(mno>a[i])
           {
               mno=a[i];
               p=i;
           }
       }
       a[p]=m;
       for(int i=0;i<n;i++)
       {
           if(b[i] > N[p][i]+mno)
           {
               a[i]=N[p][i]+mno;
               b[i]=N[p][i]+mno;
           }
       }
       a[p]=m;
       ae--;
    }
    cout<<"\nShortest Paths from First Node To All Nodes: \n";
    for(int i=1;i<n;i++)
        cout<<b[i]<<" ";
}
main()
{
    Dijkstra();
    return 0;
}

