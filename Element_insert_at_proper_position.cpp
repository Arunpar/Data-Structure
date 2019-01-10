#include<iostream>
using namespace std;
#define max 10
int main()
{
	int a[max],n,item,pos;
	cout<<"Enter the size of Array : \n";
	cin>>n;
	if(n>max||n==0)
		cout<<"Array size must be in between 1 to 10\n";
		
	else
	{
		cout<<"Enter the elements of Array : \n";
		for(int i=0;i<n;i++)
	    cin>>a[i];
	}
	
	if(n==0)
		return 0;
		
	else
	{
	    cout<<"Enter the item : \n";
	    cin>>item;
	    
	for(int i=0;i<n;i++)
		if(item>a[i]&&item<a[i+1])
	    pos=i+1;
	    
	for(int i=n-1;i>=pos;i--)
		a[i+1]=a[i];
	    a[pos]=item;
	    n=n+1;
	    cout<<"Array after insertion : \n";
	    
	for(int i=0;i<n;i++)
	    	cout<<a[i]<<"\n";
    }
}
