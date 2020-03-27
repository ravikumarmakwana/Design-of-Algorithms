#include<iostream>
using namespace std;
int n=4;
int N[4][4]={
            {0,5,100,100},
            {50,0,15,5},
            {30,100,0,15},
            {15,100,5,0}
            };
void Floyde()
{
    int D[n][n],c1,c2;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            D[i][j]=N[i][j];
    }
    for(int k=0;k<n;k++)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                c1=D[i][j];
                c2=D[i][k]+D[k][j];
                if(c1<c2)
                    D[i][j]=c1;
                else
                    D[i][j]=c2;
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
                cout<<D[i][j]<< " ";
            cout<<endl;
        }
        cout<<endl<<endl;
    }
}
main()
{
    Floyde();
    return 0;
}
