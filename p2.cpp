#include <iostream>
using namespace std;
int main()
{
    int nums;
    cout << "enter the nums: ";
    cin >> nums;
    for (int i = 1; i <= nums; i++)
    {
        for (int j = nums; j >= i; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
} 