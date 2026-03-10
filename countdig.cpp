#include <iostream>
using namespace std;
int countdigits(int x)
{
    int c=0;
    while (x>0)
    {
        x=x/10;
        c++;
    }
    return c;
}
int main()
{
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    int result=countdigits(n);
    cout<<"Total no. of digits:"<<result<<endl;
    return 0;
}
