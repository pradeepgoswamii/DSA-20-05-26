#include <iostream>
using namespace std;
int main()
{
    int nums;
    cout << "enter the number: ";
    cin >> nums;
    for (int i = 0; i <= nums; i++)
    {
        for (int j = nums; j >= i; j--)
        {
            cout << " ";
        }
        char ch = 65;
        for (int k = 1; k <= i; k++)
        {
            cout <<ch;
            ch++; 
        }
        char ch=65;
    for(int l = 1 ; l>=1; l--){
        cout<<ch;
         ch++; 
    }
        cout << endl;
    }
    return 0;
}
