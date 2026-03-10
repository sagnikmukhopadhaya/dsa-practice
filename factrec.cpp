#include <iostream>
using namespace std;
int fact(int n )
{
    if (n==0)
    {
        return 1;
    }
    else
    {
        return n* fact(n-1);
    }
}
int main()
{
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    int a=fact(n);
    cout<<"Factorial of the number is:"<<a;
    return 0;
}