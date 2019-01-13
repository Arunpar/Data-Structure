#include<iostream>
using namespace std;
#define Max 10
class BubbleSort
{
	int n,a[Max];
	public:
	void getdata();
	void traverse();
	int bubble();
		
};
void BubbleSort::getdata()
{
	cout<<"Enter the size of Array : ";
	cin>>n;
	if(n<=Max && n!=0)
	{
	    cout<<"Enter the elements of Array :\n";
		for(int i=0;i<n;i++)
		cin>>a[i];
		cout<<endl;
	}
	else
	{
		cout<<"Size must be in between 1 to 10 \n";
	    exit(0);
	
	}
}

void BubbleSort::traverse()
{
	if(n==0)
	cout<<"Array is Empty...\n";
	else
	{
		cout<<"The Elements of Array are :\n ";
		for(int i=0;i<n;i++)
		cout<<a[i]<<"  ";
		cout<<endl;
		cout<<"------------------------------\n";
	}
}

int BubbleSort::bubble()
{
	if(n==0)
	cout<<"Array is Underflow...\n";
	else
    {
    	int count=0;
    	for(int p=0;p<n-1;p++)
    	
    	for(int c=0;c<n-p-1;c++)
    	if(a[c+1]<a[c])
    	{
    		++count;
   			int temp=a[c];
    		a[c]=a[c+1];
    		a[c+1]=temp;
		}
		cout<<"No.of Comparisons are = "<<count<<endl;
		traverse();
    	
	}
}

int main()
{
	BubbleSort b;
	b.getdata();
	b.traverse();
	b.bubble();
	
	return 0;
}
