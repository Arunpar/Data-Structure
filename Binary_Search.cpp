#include<iostream>
using namespace std;
#define Max 10
class BinarySearch
{
	int n,a[Max],item;
	public:
	void getdata();
	void traverse();
	int bsearch();
		
};
void BinarySearch::getdata()
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

void BinarySearch::traverse()
{
	if(n==0)
	cout<<"Array is Empty...\n";
	else
	{
		cout<<"The Elements of Array are :\n ";
		for(int i=0;i<n;i++)
		cout<<a[i]<<"  ";
		cout<<endl;
		cout<<"-------------------------------------\n";
	}
}

int BinarySearch::bsearch()
{
	if(n==0)
	cout<<"Array is Empty...\n";
	else
    {
    	int count=0;
    	cout<<"Enter the item which is to be found : ";
    	cin>>item;
    	int f=0,l=n-1,m;
    	while(f<=l)
    	{
    		++count;
    		m=(f+l)/2;
    		
    		if(a[m]==item)
    		{
    		cout<<"No fo Comparisons are : "<<count;
    		return m+1;
    		}
    		
    		if(a[m]>item)
    		l=m-1;
    		
    		if(a[m]<item)
    		f=m+1;
		}
		cout<<"No fo Comparisons are : "<<count;
		return -1;
	}
}

int main()
{
	int bi;
	BinarySearch b;
	b.getdata();
	b.traverse();
	bi=b.bsearch();
	if(bi==-1)
	cout<<"\nItem not Found...\n";
	else
	cout<<"\nItem is Found at Position = "<<bi;
	return 0;
}
