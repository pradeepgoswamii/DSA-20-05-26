#include <iostream> 
using namespace std ; 
int main () { 
    int nums; 
    cout << "enter the nums: " ; 
    cin>>nums; 
    char ch = 64;
    for (int i = 0 ; i<= nums ; i++ ) { 
        for ( int j= 1 ; j<= i ; j++ ) { 
            cout << ch;
        }
        ch++;
        cout<<endl;
    }
    return 0; 
}