

#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
    int n;
    double arr[12][12], sum = 0.0;
    char c;

    cin >> n >> c;

    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < 12; i++)
    {
        sum += arr[n][i];
    }

    if (c == 'S')
    {
        cout << fixed << setprecision(1) << sum << endl;
    }
    else
    {
        cout << fixed << setprecision(1) << sum / 12.0 << endl;
    }
    return 0;
}
