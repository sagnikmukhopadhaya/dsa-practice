#include <iostream>
using namespace std;
void printdivisors(int n)
{
    for (int i=1;i*i<=n;i++)
    {
        if(n&i==0)
        {
            cout<<i;
            if(i!=n/i)
            {
                cout<<(n/i);
            }
        }

    }
}
int main()
{
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    return 0;
}
