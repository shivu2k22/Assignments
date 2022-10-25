
// Using Function
#include<iostream>
using namespace std;
long factorial(int n);
main()
{
    int n,counter;
    cout<<"Enter n ";
    cin>>n;
    cout<<n<<" Factorial value is "<<factorial(n);
}
long factorial(int n)
{
    int counter;
    long fact=1;
    for(int counter=1; counter<=n; ++counter)
    {
        fact*=counter;

    }
    return fact;

}