// to print Inverted half pyramid.
#include<iostream>
using namespace std;

int main()
{
    int n ;
    cout<<"Enter the number :";
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n-i+1; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}