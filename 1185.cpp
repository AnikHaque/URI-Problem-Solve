

#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
    double array[12][12], sum = 0.0;
    char c;
    cin >> c;
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            cin >> array[i][j];
        }
    }

    for (int i = 0; i < 11; i++)
    {
        for (int j = 0; j < (12 - (i + 1)); j++)
        {
            sum = sum + array[i][j];
        }
    }

    if (c == 'S')
    {
        cout << fixed << setprecision(1) << sum << endl;
    }
    else
    {
        cout << fixed << setprecision(1) << sum / 66.0 << endl;
    }
    return 0;
}
