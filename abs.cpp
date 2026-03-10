#include <iostream>
using namespace std;
int absolute(int n)
{
    if(n<0)
    {
        return (-n);
    }
    else
    {
        return(n);
    }
}
int main()
{
    int n,res;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    res=absolute(n);
    cout<<"The result is:"<<res;
    return 0;
}
