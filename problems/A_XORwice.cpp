#include <iostream>
using namespace std; 
int main() 
{  
    int t;
    cin>>t;
    unsigned char a, b;
    while (t)
    {
        t--;
        cin>>a>>b;
	    printf("%d\n", a ^ b); 
    }
    
	return 0; 
} 
