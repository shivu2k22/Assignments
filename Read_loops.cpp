#include<iostream>
using namespace std;
int main()
{
    float sum=0;
    int fact=1;
    int n,i;
    cout<<"enter n";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
        sum=sum+ (float)i/fact;

    }
    cout<<sum;
    return 0;

}

int main()
{
   int leap,m,n,i;
   cout<<"enter m ,n";
   cin>>m,n;
   for(i=m;i<=n;i++)
   {
    if(i%400==0)
    {
        
    }

   }

}