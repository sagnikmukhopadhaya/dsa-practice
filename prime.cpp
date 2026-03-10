#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    bool isprime=true;
    int n;
    cout<<"Enter any number:";
    cin>>n;
    for(int i=2; i<=sqrt(n); i++)
    {
        if(n%i==0)
        {
            cout<<"It is a composite number";
            isprime=false;
            break;
        }
        else
        {
            cout<<"It is a prime number";
            break;
        }
    }
}