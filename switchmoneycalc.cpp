#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num,num1,num2;
    cin>>num>>num1;


    switch(num)
    {
        case 1: if(num1>100)
                {
                    num2=num1/100;
                    cout<<"The number of 100 is "<<num2<<endl;
                    num1=num1-(num2*100);

                }
        case 2: if(10<=num1<=100)
                {
                    num2=num1/10;
                    cout<<"The number of 10 is "<<num2<<endl;
                    num1=num1-(num2*10);
                }
        case 3: if(0<num1<10)
                {
                    num2=num1/1;
                    cout<<"The number of 1 is "<<num2<<endl;
                    num1=num1-(num2*1);

                }

    }
    cout<<endl;
    return 0;
}

