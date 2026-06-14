#include <iostream> 
using namespace std; 
int main () {
    cout<< " enter the numbers of hight: " ;
    int nums ;
    cin>>nums ;

    for ( int i = 1 ; i<=nums ; i++) {
          for ( int j=1 ; j <=i ; j++) {
            cout << "*" ;
          }
          cout<<endl; 
    }
    return 0; 
}