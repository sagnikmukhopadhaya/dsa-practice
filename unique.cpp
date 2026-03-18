#include <iostream>
using namespace std;
int unique(int arr[], int n);
int main()
{
    int n;
    cout<<"Enter the number of elements in the array:"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0; i<n;i++)
    {
        cout<<"Enter element number"<<i+1<<endl;
        cin>>arr[i];
    }
    int c=unique(arr,n);
    if(c!=-1)
    {
        cout<<"Unique number is present"<<endl;
    }
    else
    {
    cout<<"No unique number found"<<endl;
    }
    return 0;
}
int unique(int arr[],int n);
{
    for(int i=0;i<n;i++)
    {
        bool isUnique=true;
        for(int j=0;j<n;j++)
        {
            if(i!=j && arr[i]==arr[j])
            {
                isUnique=false;
                break;
            }
        }
        if(isUnique)
            {
                return arr[i];
            }
        return -1
        }
    }

        

