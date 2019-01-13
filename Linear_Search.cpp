#include<iostream>
using namespace std;
#define Max 10
class LinearSearch
{
	int n,a[Max],item;
	public:
	void getdata();
	void traverse();
	int lsearch();
		
};
void LinearSearch::getdata()
{
	cout<<"Enter the size of Array : ";
	cin>>n;
	if(n<=Max && n!=0)
	{
	    cout<<"Enter the elements of Array :\n";
		for(int i=0;i<n;i++)
		cin>>a[i];
	}
	else
	{
		cout<<"Size must be in between 1 to 10 \n";
	    exit(0);
	
	}
}

void LinearSearch::traverse()
{
	if(n==0)
	cout<<"Array is Empty...\n";
	else
	{
		cout<<"The Elements of Array are :\n ";
		for(int i=0;i<n;i++)
		cout<<a[i]<<"  ";
		cout<<endl;
		cout<<"---------------------------------------\n";
	}
}

int LinearSearch::lsearch()
{
	if(n==0)
	cout<<"Array is Empty...\n";
	else
	{
	int count=0;
	cout<<"Enter the item which is to be searched : ";
	cin>>item;
	for(int i=0;i<n;i++)
	{
		++count;
		if(a[i]==item)
		{
		cout<<"No fo Comparisons are : "<<count;
		return i+1;
	    }
	}
	cout<<"No fo Comparisons are : "<<count;
	return -1;
    }
}

int main()
{
	int li;
	LinearSearch l;
	l.getdata();
	l.traverse();
	li=l.lsearch();
	if(li==-1)
	cout<<"\nItem Not Found...";
	else
	cout<<"\nItem is Found at position = "<<li;
}
