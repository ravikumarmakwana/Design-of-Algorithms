#include<iostream>
using namespace std;
void Bubble_sort(int a[],int n)
{
    int temp;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
main()
{
    int n;
    cout<<"Enter the number:";
    cin>>n;
    int a[n];
    cout<<"Enter the Values : ";
    for(int i=0;i<n;i++)
        cin>>a[i];
    Bubble_sort(a,n);
    cout<<"Bubble Sorting : ";
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}
