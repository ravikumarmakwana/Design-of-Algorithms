#include<cstring>
#include<iostream>
using namespace std;
void  NaiveStringMatching(string p,string t)
{
    int m=p.length();
    int n=t.length();
    int c=0;
    for(int i=0;i<=n-m;i++)
    {
        int j;
        for(j=0;j<m;j++)
        {
            if(t[i+j]!=p[j])
                break;
        }
        if(j==m)
        {
            cout<<"Patten Occur : "<<i<<endl;
            c++;
        }
    }
    cout<<"Number of Matching : "<<c;
}
int main()
{
    string p,t;
    cout<<"Enter the Text : ";
    getline(cin,t);
    cout<<"Enter the Pattern : ";
    getline(cin,p);
    NaiveStringMatching(p,t);
    return 0;
}
