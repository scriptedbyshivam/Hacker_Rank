#include <iostream>
#include <string>
using namespace std;

int main() {
    string a ;
    string b;
    string c;
    cin>>a;
    cin>>b;
    
    cout<<a.size()<<" "<<b.length()<<endl;
    cout<<a+b<<endl;

    c[0]=a[0];    
    a[0]=b[0];
    b[0]=c[0];
    /*idar double quotation marks use nahi hoga string ko input karne mai,
	 kyuki yaha array use ho raha isliye.. hum input yaha swap single quotation marks hoga..
     aur string mai input lena ho toh double quotation marks hoga in terms of 
	alphabet ho ya integer , sab mai double quotation marks use hoga */
    
    cout<<a<<" "<<b;
	// Complete the program
  
    return 0;
}
