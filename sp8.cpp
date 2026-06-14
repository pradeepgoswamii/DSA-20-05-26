#include <iostream>
using namespace std;
int main()
{
    int nums;
    
    cout << "enter the nums: ";
    cin >> nums;
    bool f = true;
    for (int i = 0; i <= nums; i++)
    {
        if ( i% 2 !=0 ) { 
            f = true  ;

        }
      
        for (int j = 1; j <=i; j++)
        {
            if (f)
            {
                cout << "1";
                f = false;
            }
            else
            {
                cout << "0";
                f = true;
            }
        }
        cout << endl;
    }
    return 0;
}