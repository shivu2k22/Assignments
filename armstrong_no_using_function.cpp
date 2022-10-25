// 1. Check if a given no is armstrong no
// Using Function
#include<iostream>
using namespace std;
bool checkArmstrongNumber(int n);

int main()
{
    int n;
    bool flag;
    cout<<"enter n ";
    cin>>n ;

    flag= checkArmstrongNumber( n);
    if (flag == true)
    cout<<n<<" is an armstrong number ";
    else
    cout<<n<<" is not an armstrong number ";
    return 0;

}
bool checkArmstrongNumber(int n)
{
    int num, r, sum = 0;
    bool isArm;
    num=n;
    while(num>0)
    {
        r= num % 10;
        num= num/10;
        sum=sum+r*r*r;

    }
    if(sum == n)
    isArm = true;
    else
    isArm = false;

    return isArm;
}

