#include <iostream>
using namespace std;
int main()
{
    int nums;
    cout << "enter the name: ";
    cin >> nums;
    int k = 1;
    for (int i = 1; i <= nums; i++){
        for (int j = 1; j <= i; j++)
        {
            cout << k<<" ";
             k++;
        }

        cout << endl;
        
    }
    return 0;
}