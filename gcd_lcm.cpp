#include<iostream>
using namespace std;
main()
{
    int n1,n2,i,gcd=1,lcm=1; //variable initialization
    cout<<" Enter two number ";
    cin>>n1>>n2;

    for(i=1; i<1000; i++)
    {
        if((n1 % i == 0)&& (n2 % i == 0))
        {
            gcd=i;
        }
    }
    lcm = (n1 * n2)/ gcd;

    cout<<"The GCD of two number  "<<n1<<" and "<<n2<<" is "<<gcd;
    cout<<"\n";
    cout<<"The LCM of two number  "<<n1<<" and "<<n2<<" is "<<lcm;
}