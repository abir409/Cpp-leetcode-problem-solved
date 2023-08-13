#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i=1;

    cin>>n;
    while(i<=n)
    {
        int j=1;
        char ch='A'+i+j-2;

        while(j<=i)
        {
            cout<<ch;
            ch++;
            j++;
        }
        cout<<endl;
        i++;
    }
}

