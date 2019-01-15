#include<iostream>
using namespace std;
#define Max 10
class Radix
{
	int n,a[Max];
    public:	
	void getdata();
	void traverse();
	int getmax();
	void radixsort();
	void countsort(int);
};
void Radix::getdata()
{
	cout<<"Enter the size of Array :";
	cin>>n;
	if(n<=Max && n!=0)
	{	
	cout<<"Enter elements in Array:\n";
	for(int i=0;i<n;i++)
	cin>>a[i];
    }
    else 
    {
	  cout<<"Array size must be in between 1 to 10 ";
	  exit(0);
	}
}
void Radix::traverse()
{
	cout<<"The elements of Array by Radix Sort are:\n";
	for(int j=0;j<n;j++)
	cout<<a[j]<<"  ";
	cout<<"\n--------------------------------\n";
}
int Radix::getmax()
{
	int large=a[0];
	for(int i=1;i<n;i++)
	{
		if(a[i]>large)
		large=a[i];
	}
	return large;
}
void Radix::countsort(int digit)
{
	int output[n],count[10],i,x;
	for(i=0;i<10;i++)count[i]=0;
	for(i=0;i<n;i++)output[i]=0;
	for(i=0;i<n;i++)
	{
		x=((a[i]/digit)%10);
		count[x]++;
	}
	for(i=1;i<10;i++)
	{
		count[i]+=count[i-1];
	}
	for(i=n-1;i>=0;i--)
	{
		x=((a[i]/digit)%10);
		output[--count[x]]=a[i];
	}
	for(i=0;i<n;i++)
	{
		a[i]=output[i];
	}
}
void Radix::radixsort()
{
	int max=getmax();
	int exp=1;
	while(max>=exp)
	{
	  countsort(exp);
	  exp=exp*10;
    }
}
int main()
{
    Radix A;
    A.getdata();
    A.traverse();
    A.radixsort();
    A.traverse();
    return 0;
}
