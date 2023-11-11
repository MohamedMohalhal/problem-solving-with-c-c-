#include <iostream>
using namespace std ;
 
int main()
{
    string nameP1 , nameP2 , namedad1 , namedad2 ;
    cin>>nameP1>>namedad1>>nameP2>>namedad2;
    
    if(namedad1 == namedad2)
    {
        cout <<"ARE Brothers"<<endl;
    }
    else
    {
        cout<<"NOT"<<endl;
    }
    return 0 ;
}