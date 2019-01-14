#include<iostream>
using namespace std;
#define Max 10
class SelectionSort
{
	int n,a[Max];
	public:
	void getdata();
	void traverse();
	int selection();
		
};
void SelectionSort::getdata()
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

void SelectionSort::traverse()
{
	if(n==0)
	cout<<"Array is Empty...\n";
	else
	{
		cout<<"The Elements of Array are :\n ";
		for(int i=0;i<n;i++)
		cout<<a[i]<<"  ";
		cout<<endl;
		cout<<"----------------------------------\n";
	}
}

int SelectionSort::selection()
{
	if(n==0)
	cout<<"Array is Underflow...\n";
	else
    {
    	int spos,i,j,temp;
    	for(i=0;i<n-1;i++)
		{
			spos=i;
			for(int j=i+1;j<n;j++)
			if(a[spos]>a[j])
			spos=j;
			
			temp=a[i];
			a[i]=a[spos];
			a[spos]=temp;
		}
		traverse();	
	}
}

int main()
{
	SelectionSort s;
	s.getdata();
	s.traverse();
	s.selection();
	
	return 0;
}
