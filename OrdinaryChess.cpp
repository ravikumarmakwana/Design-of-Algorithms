#include<iostream>
using namespace std;
main()
{
    int n;
    int c=0;
    string ans="";
    cin>>n;
    int s[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            s[i][j]=0;
    }
    int si,sj,ei,ej;
    cin>>si>>sj>>ei>>ej;
    s[si][sj]=1;
    int pi=si,pj=sj;
    while((pi!=ei || pj!=ej )&& pi<n &&  pj<n && pi>=0 && pj>=0)
    {
        if(((ei<pi && ej<pj) || (ej==pj && ei<=pi )) && ((pi!=ei || pj!=ej )&& pi<n &&  pj<n && pi>=0 && pj>=0 ))
        {
            pi=pi-2;
            pj=pj-1;
            s[pi][pj]=1;
            ans+="UL ";
            c++;
        }
        if((ei<pi && ej>pj)&& pi<n &&  pj<n && pi>=0 && pj>=0)
        {
            pi=pi-2;
            pj=pj+1;
            s[pi][pj]=1;
            ans+="UR ";
            c++;
        }
        if(((ei>pi && ej<pj) || (ej==pj && ei>=pi )) && ((pi!=ei || pj!=ej )&& pi<n &&  pj<n && pi>=0 && pj>=0))
        {
            pi=pi+2;
            pj=pj-1;
            s[pi][pj]=1;
            ans+="LL ";
            c++;
        }
        if(ei>pi && ej>pj && pi<n &&  pj<n && pi>=0 && pj>=0)
        {
            pi=pi+2;
            pj=pj+1;
            s[pi][pj]=1;
            ans+="LR ";
            c++;
        }
        if((ei==pi && ej<pj)&& pi<n &&  pj<n && pi>=0 && pj>=0)
        {
            pi=pi;
            pj=pj-2;
            s[pi][pj]=1;
            ans+="L ";
            c++;
        }
        if((ei==pi && ej>pj)&& pi<n &&  pj<n && pi>=0 && pj>=0)
        {
            pi=pi;
            pj=pj+2;
            s[pi][pj]=1;
            ans+="R ";
            c++;
        }
    }
    cout<<endl;
    if(pi!=ei && pj!=ej)
        cout<<"Impossible";
    else
        cout<<c<<endl<<ans;
    return 0;
}
