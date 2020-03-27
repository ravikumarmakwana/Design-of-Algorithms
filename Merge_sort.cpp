#include<iostream>
using namespace std;
void Merge(int a[],int p,int q,int r)
{
	int i, j, k;
	int n1 = q - p + 1;
	int n2 = r - q;
	int L[n1],R[n2];
	for (i = 0; i < n1; i++)
		L[i] = a[p + i];
	for (j = 0; j < n2; j++)
		R[j] = a[q + 1+ j];
	i = 0;
	j = 0;
    for(k=p;k<r && i<n1 && j<n2;k++)
    {
        if(L[i]<=R[j])
        {
            a[k]=L[i];
            i++;
        }
        else
        {
            a[k]=R[j];
            j++;
        }
    }
    while(i<n1)
    {
        a[k]=L[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        a[k]=R[j];
        j++;
        k++;
    }
}

void Merge_Sort(int a[], int p, int r)
{
	int q;
	if (p < r)
	{
		q = (p+r)/2;
		Merge_Sort(a,p,q);
		Merge_Sort(a,q+1,r);
		Merge(a,p,q,r);
	}
}
main()
{
	int n;
	cout<<"Enter the numbers:";
	cin>>n;
	int a[n];
	cout<<"Enter the values : ";
	for(int i=0;i<n;i++)
	cin>>a[i];
	Merge_Sort(a,0,n);
	cout<<"\nMerge Sort : ";
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	return 0;
}
