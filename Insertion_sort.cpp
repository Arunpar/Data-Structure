#include<iostream>
using namespace std;
#define Max 10
class InsertionSort
{
	int n,a[Max];
	public:
	void getdata();
	void traverse();
	int insertion();
		
};
void InsertionSort::getdata()
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

void InsertionSort::traverse()
{
	if(n==0)
	cout<<"Array is Empty...\n";
	else
	{
		cout<<"The Elements of Array are :\n ";
		for(int i=0;i<n;i++)
		cout<<a[i]<<"  ";
		cout<<endl;
		cout<<"--------------------------------\n";
	}
}

int InsertionSort::insertion()
{
	if(n==0)
	cout<<"Array is Underflow...\n";
	else
    {
    	int temp,i,j;	
    	
		for(j=1;j<n;j++)
    	{
    		temp=a[j];
    		i=j-1;
    		while(temp<a[i] && i>=0)
    		{
    			a[i+1]=a[i];
    			i--;
			}
			a[i+1]=temp;
		}
		traverse();
	}
}

int main()
{
	InsertionSort i;
	i.getdata();
	i.traverse();
	i.insertion();
	
	return 0;
}
