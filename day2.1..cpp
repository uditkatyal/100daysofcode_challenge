// to print all prime numbers till n
#include<iostream>
using namespace std;

int main()
{
    int n ;
    cout<<"Enter the value of n :";
    cin>>n;

    int num =2;
    
    while(n>num)
    {
        int div =2;

        while(num>div)
        {
            if(num%div==0)
               
               num =num +1;

            else
            {
                div=div+1;
            }
               
        }
        cout<<num<<" ";
        num=num+1;

            
    }
    return 0;
}