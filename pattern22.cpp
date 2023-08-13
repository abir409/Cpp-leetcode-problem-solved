
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i=1,value=1;

    cin>>n;
    while(i<=n)
    {
        int space=n-i;
        while(space)
        {
            cout<<" ";
            space--;
        }

        int j=1;


        while(j<=i)
        {
            cout<<value;
            j++;
            value++;
        }
        cout<<endl;
        i++;


    }
}


