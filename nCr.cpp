#include<bits/stdc++.h>
using namespace std;

int fact(int n)
{
    int fact = 1;

    for(int i=1; i<=n; i++)
    {
        fact = fact* i;
    }
    return fact;

}
int nCr(int n,int r)
{
    int num = fact(n);

    int domen = fact(r)* fact(n-r);

    return num/domen;

}

int main()
{
    int n,r;
    cin>>n>>r;

    int answer = nCr(n,r);
    cout<<answer<<endl;

    return 0;
}
