

#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{

    int n, num;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> num;

        if (num == 0)
        {
            cout << "NULL" << endl;
        }
        else
        {
            if (num % 2 == 0)
            {
                if (num < 0)
                {
                    cout << "EVEN NEGATIVE" << endl;
                }
                else
                {
                    cout << "EVEN POSITIVE" << endl;
                }
            }
            else
            {
                if (num < 0)
                {
                    cout << "ODD NEGATIVE" << endl;
                }
                else
                {
                    cout << "ODD POSITIVE" << endl;
                }
            }
        }
    }

    return 0;
}
