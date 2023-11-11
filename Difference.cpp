#include <iostream>
using namespace std ;
int main()
{
    long long int num1 , num2 , num3 ,num4  ;
    long long int res ;
    
    cin>>num1>>num2>>num3>>num4;
    res = (num1*num2)-(num3*num4);
    cout<<"Difference = "<<res<<endl; 
    
    return 0 ;
}