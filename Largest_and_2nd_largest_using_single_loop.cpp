#include<iostream>
using namespace std;
#define Max 10
int main()
{
	int a[Max],n,temp;
	cout<<"Enter The Size Of The Array : \n";
	cin>>n;
	
	if(n>Max||n==0)
	{
	cout<<"Array Size Must Be In Between 1 To 10\n";
	exit (0);
    }
	else
	cout<<"Enter The Elements Of Array : \n";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int max=a[0],secmax=0;
	for(int i=1;i<=n-1;i++)
	if(a[i]>max)
	{
		secmax=max;
		max=a[i];
	}
	else if(a[i]>secmax)
	{
		secmax=a[i];
	}
	cout<<"\nThe largest Element is : "<<max;
	cout<<"\nThe Second Largest Element is : "<<secmax;
}
