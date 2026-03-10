#include <iostream>
using namespace std;
int trailzero(int n)
{
    int res=0;
    for(int i=5;i<=n;i=i*5)
    {
        res=res+n/i;
    }
    return res;
}
int main()
{
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    int a=trailzero(n);
    cout<<"No. of trailing zeroes is:"<<a;
    return 0;
}