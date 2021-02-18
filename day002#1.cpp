// to check if a given number is armstrong number or not 
#include<iostream>
#include<math.h>

using namespace std;

int main()
{
     int n;
     cout<<"Enter the number :";
     cin>>n;
    

     int sum =0;
     int originaln=n;

     while(n>0)
     {
         int lastdigit = n%10;
         sum+= pow(lastdigit,3);
         n=n/10;
     }
    
    if(sum==originaln)
    {
        cout<<"Yes it is an Armstrong number";
    }
    else
    {
        cout<<"Not an Armstrong number";
    }
    return 0;
    
}
