#include <iostream>
using namespace std;

int hcf(int n1,int n2);

int main()
{
   int n1,n2,result;
   cout<<"Enter two Numbers : \n";
   cin>>n1>>n2;
   result=hcf(n1,n2);
   cout << "The HCF of "<<n1<<" and "<<n2<<" is = " <<result;
   return 0;
}

int hcf(int n1, int n2)
{
    if (n2!=0)
    return hcf(n2,n1%n2);
    
    else
	return n1;
}
