// sum of digits 
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	int n;
	
	
	while(t>0)
	{ 
	    int sum=0;
	    int k;
	    cin>>n;
	    
	    while(n>0)
	    {
	      k=n%10;
	      sum+=k;
	      n=n/10;
	      
	    }
	    cout<<sum<<" ";
	  t--; 
	   
	}
	
	return 0;
}

