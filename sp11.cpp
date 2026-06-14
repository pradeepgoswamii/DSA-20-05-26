#include <iostream>
using namespace std;
int main()
{
    int nums;
    cout << "enter the nums ";
    cin >> nums;
    for (int i = nums; i >= 1; i--)
    {

        for (int j =1; j <=i; j++)
        {
            cout << char(64 + j);
        }
        cout << endl;
    }
    return 0;
}