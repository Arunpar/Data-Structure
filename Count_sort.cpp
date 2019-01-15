#include<iostream>
using namespace std;
#define Max 10
class Array
{
	int n;
	int a[Max];
	public:	
		void getdata();
		void traverse();
		void countmax();
		void countsort(int);
};
void Array::getdata()
{
	cout<<"Enter the size of Array:";
	cin>>n;
	if(n<=Max &&n!=0)
	{	
	cout<<"Enter elements of array:\n";
	for(int i=0;i<n;i++)
	   cin>>a[i];
    }
    else
	{
		cout<<"Array size must be in between 1 to 10 :";
	    exit(0);
	}
}
void Array::traverse()
{
	cout<<"\nThe elements of Array by Count sort:\n";
	for(int j=0;j<n;j++)
	cout<<a[j]<<"  ";
	cout<<endl;
	cout<<"--------------------------------------\n";   
}
void Array::countsort(int max)
{
	int count[max+1];
	int output[n];
	int i;
    for(i=0;i<max+1;i++)
	   count[i]=0;
	for(i=0;i<n;i++)
	   output[i]=0;   
	for(i=0;i<n;i++)
	  count[a[i]]+=1;
	for(i=0;i<max;i++)
	  count[i+1]+=count[i];
	for(i=n-1;i>=0;i--)
	   output[--count[a[i]]]=a[i];
	for(i=0;i<n;i++)
	  a[i]=output[i];         
}
void Array::countmax()
{
	int large=a[0];
	for(int i=0;i<n;i++)
	{
		if(a[i]>large)
		large=a[i];
	}
	countsort(large);
}
int main()
{
	Array A;
	A.getdata();
	A.traverse();
	A.countmax();
	A.traverse();
	return 0;
}
