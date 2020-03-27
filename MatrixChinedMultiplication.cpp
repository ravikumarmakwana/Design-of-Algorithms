#include<iostream>
using namespace std;
int p[]={30,35,15,5,10,20,25};
void MatxiChainedMultiplication()
{
    int n=sizeof(p)/sizeof(p[0]);
    int m[n][n]={0},q,j;
    for(int i=1;i<n;i++)
        m[i][i]=0;
    for(int l=2;l<n;l++)
    {
        for(int i=1;i<n-l+1;i++)
        {
            j=i+l-1;
            m[i][j]=INT_MAX;
            for(int k=i;k<=j-1;k++)
            {
                q=m[i][k]+m[k+1][j]+p[i-1]*p[k]*p[j] ;
                if(q<m[i][j])
                {
                    m[i][j]=q;
                }
            }
        }
    }

    for(int i=1;i<n;i++)
    {
        for(int j=1;j<n;j++)
            cout<<m[i][j]<<" " ;
        cout<<endl;
    }
    cout<<endl<<endl;

}

main()
{
    MatxiChainedMultiplication();
    return 0;
}
