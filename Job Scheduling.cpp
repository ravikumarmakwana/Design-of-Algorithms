#include<iostream>
using namespace std;
int P[9]={40,10,20,35,15,25,20,7,9},D[9]={4,1,2,4,1,3,4,1,2};
int Check()
{
    for(int i=0;i<5;i++)
        s+=F[i];
    if(s==0)
        return 0;
    else return 1;
}
void JobScheduling(int P[],int D[],int n)
{
    int m=D[0];
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if([D[i]>D[j])
            {
                swap(P[i],P[j]);
                swap(D[i],D[j]);
            }
        }
    }
    int F[m+1];
    for(int i=0;i<m+1;i++)
            F[i]=i;
    F[D[0]]--;

}
main()
{
    JobScheduling(P,D,9);
    return 0;
}
