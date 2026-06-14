#include <iostream>
using namespace std; 
int main ( ) { 
    int nums ; 
    cout<<"enter the num: " ; 
    cin>>nums ; 
for ( int i = 0; i<=nums ; i++  ){ 
    for (int j =1 ; j<=i ; j++ ) { 
        cout<<" "; 
    }
    for ( int k= nums ; k>= i ;k--) {
        cout << "*"; 
    }
    for ( int k= nums ; k>i ;k--) {
        cout << "*"; 
    }
    cout<<endl; 
}
    return 0; 
}