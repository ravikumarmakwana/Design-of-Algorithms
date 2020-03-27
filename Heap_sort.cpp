#include<iostream>
using namespace std;
void Max_heapify(int a[],int i,int n)
{
    int l,r,L;
        l=2*i+1;
        r=2*i+2;
    if(l<n && a[i]<a[l])
        L=l;
    else
        L=i;
    if(r<n && a[L]<a[r])
        L=r;
    if(L!=i)
    {
        swap(a[i],a[L]);
        Max_heapify(a,L,n);
    }
}
void Bulid_max_heap(int a[],int n)
{
    for(int i=n/2 - 1;i>=0;i--)
    Max_heapify(a,i,n);
}
void Heap_sort(int a[],int n )
{
    Bulid_max_heap(a,n);
    for(int i=n-1;i>=0;i--)
    {
        swap(a[0],a[i]);
        Max_heapify(a,0,i);
    }
}
main()
{
    int n;
    cout<<"Enter the Numbers: ";
    cin>>n;
    int a[n];
    cout<<"Enter the Values: ";
    for(int i=0;i<n;i++)
        cin>>a[i];
    Heap_sort(a,n);
    cout<<"\nHeap Sort: ";
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}
