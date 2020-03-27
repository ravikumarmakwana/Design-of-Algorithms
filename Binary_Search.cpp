#include<iostream>
using namespace std;
void Insertion_sort(int a[],int n)
{
    int i,key;
    for(int j=1;j<n;j++)
    {
        i=j-1;
        key=a[j];
        while(i>=0 && a[i]>key)
        {
            a[i+1]=a[i];
            i--;
        }
        a[i+1]=key;
    }
}
int Binary_search(int a[],int k,int low,int high)
{
    int mid;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(a[mid]==k)
            return mid;
        else if (a[mid]<k)
            low=mid+1;
        else
            high=mid-1;
    }
    return -1;
}
main()
{
    int n;
    cout<<"Enter the Number : ";
    cin>>n;
    cout<<"Enter the Values:";
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    Insertion_sort(a,n);
    int k;
    cout<<"\nEnter the Number that search in given array: ";
    cin>>k;
    int l=Binary_search(a,k,0,n-1);
    if(l==-1)
        cout<<"Not Found";
    else
        cout<<"The Element at Position : "<<l;
    return 0;
}
