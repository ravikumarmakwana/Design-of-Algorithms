#include<iostream>
using namespace std;

int TOH(int n,char Sour,char Dest,char Temp)
{
    if(n==1)
    {
        cout<<"Move "<<Sour<<" To "<<Dest<<endl;
        return 0;
    }
    else
    {
        TOH(n-1,Sour,Temp,Dest);
        cout<<"Move "<<Sour<<" To "<<Dest<<endl;
        TOH(n-1,Temp,Dest,Sour);
    }
}

main()
{
    int n;
    cout<<"Enter the Number of Rings:";
    cin>>n;
    cout<<"Tower Of Hanoi"<<endl;
    TOH(n,'A','B','T');
    return 0;
}
