#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ans=0;
    int i=0;
    if(n<0)
    {
        n=n*(-1);
    }
    while(n!=0)
    {
        int bit = n&1;

        ans = (bit*pow(10,i))+ans;
        n=n>>1;
        i++;

    }

    int newans=(~ans);
    newans=newans+1;
    cout<<newans<<endl;
}
