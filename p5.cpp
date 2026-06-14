#include <iostream>
using namespace std;
int main()
{

    int nums;
    cout << " enter the nums ";
    cin >> nums;
    for (int i = 1; i <= nums; i++)
    {

        for (int k = 1; k <= nums - i; k++)
        {
            cout << " ";
        }

        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        for (int m = 1; m < i; m++)
        {
            cout << "*";
        }

        cout << endl;
    }
    return 0;
}