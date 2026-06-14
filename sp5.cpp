#include <iostream> 
using namespace std ; 
int main ( ) { 
    int nums ; 
    cout <<"enter the number: " ; 
    cin>>nums; 
    for ( int i= nums ; i>= 0 ; i--){ 
        for (int j=1 ; j<=i ; j++) { 
            cout <<j;

        }
        cout<<endl ; 

    }
    return 0 ; 

}