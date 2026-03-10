#include <iostream>
using namespace std;
int gcd(int a, int b)
{
    if (b==0)
    {
        return a;
    }
    else
    {
        return gcd(b,a%b);
    }
}
int main()
{
    int a,b, res;
    cout<<"Enter a:"<<endl;
    cin>>a;
    cout<<"Enter b:"<<endl;
    cin>>b;
    res=gcd(a,b);
    cout<<"The HCF is:"<<res;
    return 0;
}
