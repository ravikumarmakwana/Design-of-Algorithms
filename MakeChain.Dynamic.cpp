#include<iostream>
using namespace std;
int d[]={1,7,9};
void MakeChainDynamic()
{
    int n=15,m,v;
    int c[3][n];
    int a[n];
    for(int i=0;i<n;i++)
        a[i]=i;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==0)
                c[i][j]= d[i] * j;
            else
            {
                if(d[i]<=a[j])
                {
                    m=1+c[i][j-d[i]];
                    v=c[i][j]=c[i-1][j];
                    if(m<v)
                        c[i][j]=m;
                    else
                        c[i][j]=v;
                }
                else
                    c[i][j]=c[i-1][j];
            }
        }
    }
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    cout<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<n;j++)
            cout<<c[i][j]<<" ";
        cout<<endl;
    }
}
main()
{
    MakeChainDynamic();
    return 0;
}
