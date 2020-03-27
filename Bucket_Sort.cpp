#include<iostream>
using namespace std;
void Bucket_sort(int a[],int n)
{

}
main()
{
    int n;
    cout<<"Enter the number:";
    cin>>n;
    int a[n];
    cout<<"Enter the Values:";
    for(int i=0;i<n;i++)
        cin>>a[i];
    Bucket_sort(a,n);
    cout<<"\nBucket Sort : ";
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}
