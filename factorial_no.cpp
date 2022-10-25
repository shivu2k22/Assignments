#include<iostream>
using namespace std;
main()
{
    int n;
    float factorial=1.0;
    cout<<"Enter n";
    cin>>n;
    for(int i=1; i<=n; ++i)
    {
        factorial*=i;
    }
    cout<<"factorial of "<<n<<" is "<<factorial;
}

