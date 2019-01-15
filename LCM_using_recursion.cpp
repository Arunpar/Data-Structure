#include<iostream>
using namespace std;
 
int lcm(int, int);
 
int main()
{
    int n1,n2,result;
 
    cout<<"Enter two numbers: ";
    cin>>n1>>n2;
    result = lcm(n1,n2);
    cout<<"The LCM of "<<n1<<" and "<<n2<<" is = "<<result;
    return 0;
}
 
int lcm(int n1,int n2)
{ 
    static int ans = 1;
 
    if (ans%n1==0 && ans%n2==0)
    {
        return ans;
    }
    ans++;
    lcm(n1,n2);
    return ans;
}
