// to count the elements of string , concatenating strings ,swapping elements of string
#include <iostream>
#include <string>
#include<math.h>
using namespace std;

int main() {
	// Complete the program
  string a,b;
  cin>>a>>b;
  
  cout<<"length of a"<<a.size()<<" "<<"length of b :"<<b.size()<<endl;
  
        cout<<"string after concatention";
        cout<<a+b<<endl; 
    
    
    
    char temp;
    temp=a[0];
    a[0]=b[0];
    b[0]=temp;

    cout<<"After swapping 1st letters";
    cout<<a<<" "<<b;
        
    return 0;
}
