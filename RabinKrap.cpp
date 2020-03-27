#include<cmath>
#include<iostream>
using namespace std;
void RabinKarp(string T,string P,int d,int q)
{
    int t=0;
    int p=0;
    int m=P.length();
    int n=T.length();
    int h=pow(d,m-1);
    h%=q;
    for(int i=0;i<m;i++)
    {
        p=(d*p+P[i])%q;
        t=(d*t+T[i])%q;
    }
    for(int s=0;s<n-m;s++)
    {
        while(P[s++]==T[(s+1)++])

    }
}
main()
{
    string T,P;
    cout<<"Enter the Text::";
    cin>>T;
    cout<<"Enter the Pattern ::";
    cin>>P;
    RabinKarp(T,P,10,11);
    return 0;
}
