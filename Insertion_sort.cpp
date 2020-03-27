#include<iostream>
using namespace std;
void Insert_sort(int a[],int n)
{
    int key,i;
    for(int j=1;j<n;j++)
    {
        i=j-1;
        key=a[j];
        while(i>=0&& key<a[i])
        {
            a[i+1]=a[i];
            i--;
        }
        a[i+1]=key;
    }
}
main()
{
    int n;
    cout<<"Enter the Number ::";
    cin>>n;
    int a[n];
    cout<<"Enter the values ::";
    for(int i=0;i<n;i++)
        cin>>a[i];
    Insert_sort(a,n);
    cout<<endl;
    cout<<"Insertion Sort : ";
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}
