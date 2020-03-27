#include<iostream>
using namespace std;
int w[]={1,2,5,6,7};
int W=10;
int v[]={1,6,18,22,28};
void KnapsackDynamic()
{
    int c[6][11];
    for(int i=0;i<11;i++)
        c[0][i]=0;
    for(int i=0;i<6;i++)
        c[i][0]=0;

    int c1,c2;
    for(int i=1;i<6;i++)
    {
        for(int j=1;j<11;j++)
        {
            c1=c2=0;
            if(j<w[i-1])
                c1=c[i-1][j];
            if(j>=w[i-1])
                c2=v[i-1]+c[i-1][j-w[i-1]];
            if(c1<c2)
                c[i][j]=c2;
            else
                c[i][j]=c1;

        }
    }
    for(int i=0;i<6;i++)
    {
        for(int j=0;j<11;j++)
        {
            if(c[i][j]<9)
                cout<<c[i][j]<<"  ";
            else
                cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
}
main()
{
    KnapsackDynamic();
    return 0;
}
