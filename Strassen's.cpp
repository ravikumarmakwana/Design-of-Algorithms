#include<iostream>
using namespace std;
int a[2][2],b[2][2],n=2;
void Strassen()
{
    int P1,P2,P3,P4,P5,P6,P7;
    P1=a[0][0]*(b[0][1] - b[1][1]);
    P2=b[1][1]*(a[0][0] + a[0][1]);
    P3=b[0][0]*(a[1][0] + a[1][1]);
    P4=a[1][1]*(b[1][0] - b[0][0]);
    P5=(a[0][0] + a[1][1])*(b[0][0] + b[1][1]);
    P6=(a[0][1]- a[1][1] )*(b[1][0] + b[1][1]);
    P7=(a[0][0]-a[1][0])*(b[0][0]+b[0][1]);
    int c[n][n];
   c[0][0]=P4+P5+P6-P2;
   c[0][1]=P1+P2;
   c[1][0]=P3+P4;
   c[1][1]=P1-P3+P5-P7;
   cout<<"The Answer Of Matrix Multiplication :\n";
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<n;j++)
            cout<<c[i][j]<< " ";
       cout<<endl;
   }
}
main()
{
    cout<<"Enter the  First Matrix : \n";
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
            cin>>a[i][j];
    }
    cout<<"Enter the Second Matrix : \n";
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
            cin>>b[i][j];
    }
    Strassen();
    return 0;
}
