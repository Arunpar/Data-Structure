#include<iostream>
using namespace std;
#define Max 10
class Sorting
{   public:
	int a[Max],n;
	void setdata();
	void traverse();
	int partition(int,int);
	void quicksort(int,int);
};
void Sorting::setdata()
{
	cout<<"Enter size of the array : \n";
    cin>>n;
    if(n<=Max && n!=0)
    {
    cout<<"Enter the elements of the array :\n";
    for(int i=0;i<n;i++)cin>>a[i];
    }
    else
    {
    cout<<"Array size must be in between 1 to 10 :";
    exit(0);
    }
}   	
void Sorting:: traverse()
{
	cout<<"The sorted elements by Quick sort: \n";
	for(int i=0;i<n;i++)
	cout<<a[i]<<" ";
	cout<<"\n------------------------------\n";
}
void Sorting::quicksort(int f,int l)
{
   if(f<l)
   {
	int pos=partition(f,l);
	quicksort( f,pos-1);
	quicksort(pos+1, l);    
   }     		
}
int Sorting::partition(int f, int l)
{
    int pivot=a[l];
    int i=f-1;
    for(int j=f;j<=l-1;j++)
   {
	if(pivot > a[j]) swap(a[++i],a[j]);
   }
   swap(a[++i],a[l]);
   return i;
}

void swap(int &i, int &j)
{
  int temp=i;
  i=j;
  j=temp;
}
main()
{
	Sorting Q;
	Q.setdata();
	Q.traverse();
	Q.quicksort(0,Q.n-1);
	Q.traverse();
}




