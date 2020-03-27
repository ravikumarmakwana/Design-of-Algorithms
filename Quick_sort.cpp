#include<iostream>
using namespace std;
int Partition(int a[],int p,int r)
{
    int x=r-1;
    int i=p-1;
    for(int j=p;j<=r;j++)
    {
        if(a[j]<a[x])
        {
            i++;
            swap(a[i],a[j]);
        }
    }
    swap(a[i+1],a[x]);
    return (i+1);
}
void Quick_sort(int a[],int p,int r)
{
    int q;
    if(p<r)
    {
        q=Partition(a,p,r);
        Quick_sort(a,p,q-1);
        Quick_sort(a,q+1,r);
    }
}
main()
{
    int n;
    cout<<"Enter the number:";
    cin>>n;
    int a[n];
    cout<<"Enter the values : ";
    for(int i=0;i<n;i++)
        cin>>a[i];
    Quick_sort(a,0,n);
    cout<<"Quick Sort : ";
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}
