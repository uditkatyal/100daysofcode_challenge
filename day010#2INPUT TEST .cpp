// Enormous input test 
#include<iostream>
using namespace std;

int main()
{
    int n, k;
    cin>>n>>k;
    
    int t;
    int count =0;
    
    for(int i=0; i<n; i++)
    {   
        cin>>t;
    
         if(t%k==0)
       {
             count++;
       }
    }   
  
  cout<<count;
  
  return 0;
    
}