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
		void shellsort();
};
void Array::getdata()
{
	cout<<"Enter the size of Array:";
	cin>>n;
	if(n<=Max && n!=0)
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
	cout<<"The sorted Elements by Shell sort : \n";
	for(int j=0;j<n;j++)
    cout<<a[j]<<"  ";
	cout<<endl;
	cout<<"----------------------------------\n";   
}
void Array::shellsort()
{
	int gap,i,j,temp;
	gap=n/2;
	while(gap>0)
	{
		for(i=gap;i<n;i++)
		{
			j=i;
			temp=a[i];
			while((a[j-gap]>temp)&&(j>=gap))
			{
				a[j]=a[j-gap];
				j=j-gap;
			}
			a[j]=temp;
		}
		gap=gap/2;
	}
}
int main()
{
	Array A;
	A.getdata();
	A.traverse();
    A.shellsort();
    A.traverse();
    return 0;
}
