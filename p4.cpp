#include <iostream>
using namespace std;
int main()
{
    int nums;
    cout << "enter the number: ";
    cin >> nums;
    for (int i = nums ; i>=1 ; i-- ){ 
        for ( int j= 1 ; j<=nums - i ; j++){
            cout <<" ";
        }
        for ( int k = 1 ; k<=i ; k++ ){ 
            cout<<"*";
        }
        cout << endl;
    }
    return 0 ;
} 