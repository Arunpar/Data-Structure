#include<iostream>
using namespace std;
#define Max 10
class Merge
{
	public:
	int n,a[Max];
	void setdata();
	void traverse();
	void merge(int,int,int);
	void mergesort(int,int);	
};
void Merge::setdata()
{
	cout<<"Enter the size of Array : ";
	cin>>n;
	if(n<=Max && n!=0)
	{
		cout<<"Enter the Elements of Array : \n";
		for(int i=0;i<n;i++)
		cin>>a[i];
	}
	else
	{
		cout<<"Array size must be in between 1 to 10 :";
	    exit(0);
	}
}
void Merge::traverse()
{
	cout<<"The sorted Elements by Merge sort : \n";
	for(int i=0;i<n;i++)
	cout<<a[i]<<"  ";
	cout<<"\n-----------------------------------\n";
}
void Merge::mergesort(int f,int l)
{
	if(f<l)
	{
		int m;
		m=(f+l)/2;
	    mergesort(f,m);
	    mergesort(m+1,l);
	    merge(f,m,l);
	}
}
void Merge::merge(int f,int m,int l)
{
	int n1=m-f+1;
	int n2=l-m;
	int i,j;
	int L[n1+1],R[n2+1];
	
	for(i=0;i<n1;i++)
	L[i]=a[f+i];
	L[i]=10000;
	
	for(i=0;i<n2;i++)
	R[i]=a[m+i+1];
	R[i]=10000;
	i=0;
	j=0;
	
	for(int k=f;k<=l;k++)
	{
		if(L[i]<R[j])
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
}

int main()
{
	Merge m;
    m.setdata();
    m.traverse();
    m.mergesort(0,m.n-1);
	m.traverse();
}
