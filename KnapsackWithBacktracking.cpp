#include<iostream>
using namespace std;
int w[]={2,3,4,5};
int v[]={6,10,9,16};
void KnapsackWithBacktracking(int W)
{
    int wlen=sizeof(w)/sizeof(w[0]);
    int vlen=sizeof(v)/sizeof(v[0]);
    int r[vlen]={0};
    for(int i=0;i<vlen;i++)
    {
        for(int j=i+1;j<i;j++)
        {
            if(v[i]>v[j])
            {
                swap(v[i],v[j]);
                swap(w[i],w[j]);
            }
        }
    }
    BackTracking();

}
void BackTracking()
{

}
main()
{
    int W;
    cout<<"Enter the Total Weights: ";
    cin>>W;
    KnapsackWithBacktracking(W);
    return 0;
}
