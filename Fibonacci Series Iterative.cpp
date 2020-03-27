#include<iostream>
using namespace std;
int Fibo(int n)
{
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else
    {
        int s=Fibo(n-1)+Fibo(n-2);
        cout<<s<<" ";
        return s;
    }

}
main()
{
    int n;
    cout<<"Enter the Number:";
    cin>>n;
    Fibo(n);
    return 0;
}
