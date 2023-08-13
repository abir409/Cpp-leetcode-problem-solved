#include<bits/stdc++.h>
using namespace std;

int count_set_bit(int n)
{
    int count=0;
    while(n)
    {
        count+=n&1;
        n>>=1;
    }

    return count;
}
int main()
{
    int a,b;
    cin>>a>>b;
    int num1=count_set_bit(a);
    int num2=count_set_bit(b);

    int totalsetbit = num1+num2;
    cout<<totalsetbit<<endl;

    return 0;
}
