#include<iostream>
using namespace std;
char X[]={'1','0','1','1','0','0','1','0'};
char Y[]={'0','1','1','0','1','1','0'};
void LongetsCommonSubsequence()
{
    int x=sizeof(X)/sizeof(X[0]);
    int y=sizeof(Y)/sizeof(Y[0]);
    int c[x+1][y+1],c1,c2;
    for(int i=0;i<x+1;i++)
    {
        for(int j=0;j<y+1;j++)
        {
            if(i==0 || j==0)
                c[i][j]=0;
            else if(X[i-1]==Y[j-1])
                c[i][j]=1+c[i-1][j-1];
            else
            {
                c1=c[i-1][j];
                c2=c[i][j-1];
                if(c1<c2)
                    c[i][j]=c2;
                else
                    c[i][j]=c1;
            }
        }
    }
    for(int i=0;i<x+1;i++)
    {
        for(int j=0;j<y+1;j++)
            cout<<c[i][j]<<" ";
        cout<<endl;
    }
}
main()
{
    LongetsCommonSubsequence();
    return 0;
}
