#include<iostream>
using namespace std;
int n=0,l=0;
int a[10];
void Greedy_Activity_Seclector(int s[],int f[])
{
    a[l]=0;
    l++;
    int k=0;
    for(int i=1;i<n;i++)
    {
        if(s[i]>f[k])
        {
            a[l]=i;
            l++;
            k=i;
        }
    }
}
main()
{
    cout<<"Enter the number:";
    cin>>n;
    int S[n],F[n];
    cout<<"Enter the Starting and Finishing time for Each process:\n";
    for(int i=0;i<n;i++)
        cin>>S[i]>>F[i];
    Greedy_Activity_Seclector(S,F);
    cout<<"\nGreedy Activity Selection: ";
    for(int i=0;i<l;i++)
        cout<<a[i]<<" ";
    return 0;
}

