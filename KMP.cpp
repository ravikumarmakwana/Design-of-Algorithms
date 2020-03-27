#include<cstring>
#include<iostream>
using namespace std;
int PI[20];
void ComputePrefixFunction(string p,int m)
{
    int k=0;
    PI[0]=0;
    for(int q=1;q<m;q++)
    {
        while(k>0 && p[k]!=p[q])
            k=PI[k];
        if(p[k]==p[q])
            k++;
        PI[q]=k;
    }
}
void KMP_Matching(string p,string t,int n,int m)
{
    int q=0,c=0;
    for(int i=0;i<n;i++)
    {
        while(q>0 && p[q]!=t[i])
            q=PI[q];
        if(p[q]==t[i])
            q++;
        if(q==m)
        {
            cout<<"Pattern Occur at Location : "<<i-m+1<<endl;
            c++;
        }
    }
    cout<<"Matching :: "<<c;
}
int main()
{
    string p,t;
    cout<<"Enter the Text : ";
    getline(cin,t);
    cout<<"Enter the Pattern : ";
    getline(cin,p);
    int m=p.length();
    int n=t.length();
    ComputePrefixFunction(p,m);
    KMP_Matching(p,t,n,m);
    return 0;
}
