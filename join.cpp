#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the number of elements in first array"<<endl;
    cin>>a;
    int arr1[a];
    cout<<"Enter the number of elements in second array"<<endl;
    cin>>b;
    int arr2[b];
    for(int i=0;i<a;i++)
    {
        cout<<"Enter the element:"<<endl;
        cin>>arr1[i];
    }
    for(int i=0;i<b;i++)
    {
        cout<<"Enter the element:"<<endl;
        cin>>arr2[i];
    }
    int arr3[a+b];
    for (int i=0;i<a;i++)
    {
        arr3[i]=arr1[i];
    }
    for (int i=0;i<b;i++)
    {
        arr3[a+i]=arr2[i];
    }
    cout<<"Joined array:["<<endl;
    for (int i=0; i<a+b; i++)
    {
        cout<<arr3[i];
        if(i!=a+b-1)
        {
            cout<<",";
        }
    }
    cout<<"]"<<endl;
}

