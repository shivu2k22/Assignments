#include<iostream>
using namespace std;
int main()
{
    int sizeArr;
    cout<<"ENTER NUMBER OF ELEMENTS : ";
    cin>>sizeArr;
    int k, a[sizeArr], sink[sizeArr];
    cout<<"ENTER THE ELEMENTS : ";
    for(int i=0;i<sizeArr;i++)
    {
        cin>>a[i];
    }
    cout<<"ENTER 'k' : ";
    cin>>k;
    k = k%sizeArr;
    cout<<"\n\n'k' : "<<k<<endl;
    int i = 0, j = 0;
    while(i<k)
    {
        sink[i] = a[sizeArr - k + i];
        i++;
    }
    while(j<sizeArr - k)
    {
        sink[i++] = a[j++];
    }
    for(int i=0;i<sizeArr;i++)
    {
        cout<<sink[i]<<" ";
    }
    return 0;
}