#include <iostream>
using namespace std;
int main()
{
    int nums;
    cout << "enter the nums: ";
    cin >> nums;
    
    for (int i = 1; i <= nums; i++)
    {int space = 2*( nums - i);
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        for (int p = 1; p <= space ; p++)
        {
            cout << " ";
        }
        for (int g = i; g >= 1; g--)
        {
            cout << g;
        }

        cout << endl;
        space -= 2;
    }
    return 0;
}