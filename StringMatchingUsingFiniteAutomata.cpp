#include<iostream>
using namespace std;
void Compute_Transition_Table(string p,int plength,string s,int slength)
{
    int D[plength][slength];
    int c=0,l1,l2;
    for(int i=0;i<slength;i++)
    {
        string part;
        for(int j=0;j<plength;j++)
        {
            l1=i;
            l2=j;
            if(p[l1--]==p[l2--])
            {
                c=1;
                break;
            }
            else
            {
                c=0;
            }
        }
        if(c==1)
            break;
    }
    cout<<l1;
}
int main()
{
    string p,t;
    cout<<"Enter the Text ::";
    getline(cin,t);
    cout<<"Enter the Pattern :: ";
    getline(cin,p);
    char s[10];
    int k=0,c=0;
    for(int i=0;p[i]!=NULL;i++)
    {
        if(i==0)
            s[k++]=p[i];
        else
        {
            c=0;
            for(int j=0;j<k;j++)
            {
                if(s[j]==p[i])
                {
                    c=1;
                    break;
                }
                else
                {
                    c=0;
                }

            }
            if(c==0)
                s[k++]=p[i];
        }
    }
    s[k]='\0';
    for(int i=0;i<k;i++)
        cout<<s[i]<<" ";
    Compute_Transition_Table(p,p.length(),s,k);
    return 0;
}
