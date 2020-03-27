#include<iostream>
using namespace std;
void Shell_sort(int a[],int n)
{
    int key,i;
    int L=4;
    while(L>0)
    {
        for(int k=0;k<L;k++)
        {
            for(int j=L+k;j<n;j=j+L)
            {
                i=j-L;
                key=a[j];
                while(i>=0 && key<a[i])
                {
                    a[i+L]=a[i];
                    i=i-L;
                }
                a[i+L]=key;
            }
        }
        L=L/2;
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
    Shell_sort(a,n);
    cout<<endl;
    cout<<"Shell Sort : ";
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}
