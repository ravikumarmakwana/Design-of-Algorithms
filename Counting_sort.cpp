#include<iostream>
using namespace std;
void Counting_sort(int a[],int n,int b[],int k)
{
    int c[k+1]={0};
    for(int i=0;i<n;i++)
        c[a[i]]=c[a[i]]+1;
    for(int i=1;i<=k;i++)
        c[i]=c[i]+c[i-1];
    for(int i=n-1;i>=0;i--)
    {
        b[c[a[i]]-1]=a[i];
        c[a[i]]--;
    }
}
main()
{
    int n;
    cout<<"Enter the number:";
    cin>>n;
    int k;
    cout<<"Enter the K:";
    cin>>k;
    int a[n],b[n];
    cout<<"Enter the values:";
    for(int i=0;i<n;i++)
        cin>>a[i];
    Counting_sort(a,n,b,k);
    cout<<"\nCounting Sort: ";
    for(int i=0;i<n;i++)
        cout<<b[i]<<" ";
    return 0;
}
