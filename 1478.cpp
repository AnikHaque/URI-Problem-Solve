#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
    int n, x;
    while (1)
    {
        cin >> n;
        if (n == 0)
            break;

        else
        {
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {

                    cout << setw(3) << abs(j - i) + 1;

                    if (j < n - 1)
                    {

                        cout << " ";
                    }
                    else
                    {
                        cout << endl;
                    }
                }
            }
            cout << endl;
        }
    }
    return 0;
}
