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
int lcm(int a, int b)
{
    return (a*b)/gcd(a,b);
}
int main()
{
    int a,b, reshcf, reslcm;
    cout<<"Enter a:"<<endl;
    cin>>a;
    cout<<"Enter b:"<<endl;
    cin>>b;
    reshcf=gcd(a,b);
    reslcm=lcm(a,b);
    cout<<"The HCF is:"<<reshcf;
    cout<<"The LCM is:"<<reslcm;   
    return 0; 
}
