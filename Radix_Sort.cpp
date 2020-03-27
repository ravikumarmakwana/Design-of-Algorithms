#include<iostream>
using namespace std;
void Radix_sort(int a[],int n,int s)
{
    int b[n],p[n],h[n],l=10;
    while(s>0)
    {
        for(int i=0;i<n;i++)
        {
            b[i]=(a[i]%l - a[i]%(l/10))/(l/10);
        }
        for(int i=0;i<n;i++)
            cout<<b[i]<<" ";
        cout<<endl;
        int m=b[0];
        for(int i=0;i<n;i++)
        {
            if(m<b[i])
                m=b[i];
        }
        int c[m+1]={0};
        for(int i=0;i<n;i++)
        {
            c[b[i]]++;
        }
        for(int i=1;i<=m;i++)
            c[i]=c[i]+c[i-1];
        for(int i=n-1;i>=0;i--)
        {
            h[c[b[i]]-1]=a[i];
            c[b[i]]--;
        }
        for(int i=0;i<n;i++)
            a[i]=h[i];
        cout<<endl;
        for(int i=0;i<n;i++)
            cout<<a[i]<<" ";
        cout<<endl;
        l*=10;
        s--;
    }
}
main()
{
    int n,s;
    cout<<"Enter the number:";
    cin>>n;
    cout<<"Enter the Number of digits in each number : ";
    cin>>s;
    int a[n];
    cout<<"Enter the values:";
    for(int i=0;i<n;i++)
        cin>>a[i];
    Radix_sort(a,n,s);
    cout<<"\nRadix Sort : ";
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}
