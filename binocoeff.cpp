#include <iostream>
using namespace std;
int bin(int a)
{
    int s=1;
    for (int i=a; i>1; i--)
    {
        s=s*i;
    }
        return s;
}
int main()
{
    int n,r;
    cout<<"Enter the value of n:";
    cin>>n;
    cout<<"Enter the value of r:";
    cin>>r;
    int x=bin(n);
    int y=bin(r);
    int z=bin(n-r);
    int val=x/(y*z);
    cout<<"The answer is:"<<val<<endl;
    return 0;
}