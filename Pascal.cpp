#include<iostream>
using namespace std;
main()
{
    int no;
    cout<<"Enter the Number :";
    cin>>no;
    int a[no][no]={0};
    a[0][0]=1;
    for(int i=1;i<no;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if(i==j)
                a[i][j]=1;
            else if(i!=0)
                a[i][j]=a[i-1][j]+a[i-1][j-1];
        }
        a[i][0]=1;
    }
    cout<<"Pascal Triangle of "<<no<<endl;
    for(int i=0;i<no;i++)
    {
        for(int j=0;j<=i;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
}
