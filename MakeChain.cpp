#include<iostream>
using namespace std;
main()
{
    int n,s=0;;
    int a[]={2000,500,200,100,50,20,10,5,1};
    cout<<"Enter the n:";
    cin>>n;
    int p[10]={0};
    int i=0,l=0,q=0;
    while(n>0)
    {
        if(n>=a[i])
        {
            s=s+a[i];
            l++;
            n=n-a[i];
            p[q]=a[i];
            q++;
        }
        else
        {
            i++;
        }
    }
    cout<<l;
    cout<<endl;
    cout<<"Coins : ";
    for(int i=0;i<q;i++)
        cout<<p[i]<<" ";
    return 0;
}
