#include <iostream>
using namespace std ;
 
int main ()
{
    long long int num1 , num2 ;
    int numDigit1 , numDigit2 ;
    
    cin>>num1>>num2;
    
    numDigit1 = num1 % 10 ;
    numDigit2 = num2 % 10 ;
    
    cout<<numDigit1+numDigit2;
    
}