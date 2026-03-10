#include <iostream>
using namespace std;
bool ispal(int n)
{
    int s=0;
    int x=n;
    while(x!=0)
    {
        int ld=x%10;
        s=s*10+ld;
        x=x/10;
    }
    return (s==n);
}
int main()
{
    int a;
    cout<<"Enter the number"<<endl;
    cin>>a;
    ispal(a);
    if(ispal(a))
    {
        cout<<"the no. is palindrome"<<endl;
    }
    else
    {
        cout<<"The no. is not palindrome"<<endl;
    }
    return 0;
}