// to check whether the no. is prime or not
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value :";
    cin>>n;

    bool flag =0;

    for(int i=2; i<n; i++)
    {
        if(n%i==0)
        {
            cout<<"Non Prime";
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"Prime Number";
    }
    return 0;
}