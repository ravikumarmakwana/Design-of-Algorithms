#include<iostream>
using namespace std;
main()
{
    int n;
    cout<<"Enter the Number:";
    cin>>n;
    int a=0,b=1,i=0,sum;
    cout<<"Fibonacci Series : ";
    cout<<a<<" "<<b<<" ";
    while(i<n-2)
    {
        sum=a+b;
        cout<<sum<<" ";
        a=b;
        b=sum;
        i++;
    }
    return 0;
}
