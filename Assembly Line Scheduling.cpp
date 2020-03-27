#include<iostream>
using namespace std;
int e1=2,e2=4,x1=3,x2=2;
int n=6;
int t1[]={2,3,1,3,4};
int t2[]={2,1,2,2,1};
int a1[]={7,9,3,4,8,4},a2[]={8,5,6,4,5,7};
void AssemblyLineScheduling()
{
    int f,l,c1,c2;
    int f1[n],f2[n];
    int i=0;
    for(i=0;i<n;i++)
    {
        if(i==0)
        {
            f1[i]=e1+a1[i];
            f2[i]=e2+a2[i];
        }
        else
        {
            c1=a1[i]+f1[i-1];
            c2=a1[i]+t2[i-1]+f2[i-1];
            if(c1<c2)
                f1[i]=c1;
            else
                f1[i]=c2;


            c1=a2[i]+f2[i-1];
            c2=a2[i]+f1[i-1]+t1[i-1];
            if(c1<c2)
                f2[i]=c1;
            else
                f2[i]=c2;
        }
    }
    if(f1[i-1]+x1<f2[i-1]+x2)
    {
        f=f1[i-1]+x1;
        l=1;
    }
    else
    {
        f=f2[i-1]+x2;
        l=2;
    }
    for(int i=0;i<n;i++)
        cout<<f1[i]<<" ";
    cout<<endl;
     for(int i=0;i<n;i++)
        cout<<f2[i]<<" ";
    cout<<endl;

    cout<<"f* = "<<f;
    cout<<endl;
    cout<<"l* = "<<l;
}
main()
{
    AssemblyLineScheduling();
    return 0;
}
