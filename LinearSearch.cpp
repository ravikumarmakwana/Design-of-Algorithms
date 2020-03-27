#include<cstdlib>
#include<iostream>
using namespace std;
int Linear_Search(int a[],int n,int k)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==k)
            return i;
    }
    cout<<"Not Found";
    exit(0);
}
main()
{
    int n;
    cout<<"Enter the Number : ";
    cin>>n;
    int a[n];
    cout<<"Enter the Values : ";
    for(int i=0;i<n;i++)
        cin>>a[i];
    int k;
    cout<<"Enter the Element that you want to Found in this Array : ";
    cin>>k;
    int l=Linear_Search(a,n,k);
    cout<<"\nThe Location of given Element : "<<l+1;
    return 0;
}
