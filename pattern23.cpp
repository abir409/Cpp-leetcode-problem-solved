#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i=1;

    cin>>n;
    while(i<=n)
    {
        int j=1;
        while(j<=n-i+1)
        {
            cout<<j;
            j++;
        }
        int star=i-1;
        while(star)
        {
            cout<<"*";
            star--;
        }
        int star1=i-1;
        while(star1)
        {
            cout<<"*";
            star1--;
        }
        int k=1;
        while(k<=n-i+1)
        {
            cout<<n-k-i+2;
            k++;
        }

        cout<<endl;
        i++;
    }
}





