#include<iostream>
using namespace std;
float Knapsack(int w[],int v[],int n,int W)
{
    float a[n];
    for(int i=0;i<n;i++)
        a[i]=(float)w[i]/v[i];
    float temp;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                swap(a[i],a[j]);
                swap(w[i],w[j]);
                swap(v[i],v[j]);
            }
        }
    }
    int i=0;
    float Value=0,Weight=0;
    while(W > w[i])
    {
        Weight+=w[i];
        Value+=v[i];
        W-=w[i];
        i++;
    }
    Value+=(float)(W*v[i])/w[i];
    return Value;
}
main()
{
    int n;
    cout<<"Enter the number:";
    cin>>n;
    int w[n];
    int v[n];
    int W;
    cout<<"Enter the Maximum W:";
    cin>>W;
    cout<<"Enter the W : ";
    for(int i=0;i<n;i++)
        cin>>w[i];
    cout<<"Enter the v : ";
    for(int i=0;i<n;i++)
        cin>>v[i];
    float V=Knapsack(w,v,n,W);
    cout<<"Knapsack Algorithms\nMaximum Value :: "<<V;
    return 0;
}
