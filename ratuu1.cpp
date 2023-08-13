#include<iostream>
#include<algorithm>
using namespace std;

void Swap(int arr[],int n)
{
    for(int i=0; i<n; i++)
    {
        if(i+1<n)
        {
            swap(arr[i],arr[i+1]);
        }

         cout<<arr[i];
    }

}

int main()
{
    int size;
    cin>>size;
    int arr[100];
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }

    Swap(arr,size);

    return 0;

}
