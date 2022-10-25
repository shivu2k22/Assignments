// 1. Check if a given no is armstrong no
// Using Loop

#include<iostream>
using namespace std;
int main()
{
    int n, r, sum = 0, m;
    cout<<"enter n";
    cin>>n ;
    m=n;
    while(n>0)
    {
        r= n % 10;
        n= n/10;
        sum=sum+r*r*r;

    }
    cout<<"number is ";
    if(sum == m)
    cout<<"Armstrong";
    else
    cout<<"not Armstrong";
}

