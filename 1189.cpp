// https://www.beecrowd.com.br/judge/en/problems/view/1189
// Tanjila Shamima
// Software Engineer at BJIT Group
// uri online problem solved by Tanjila Shamima
// personal website: https://tanjila-shamima.web.app/

#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
    double array[12][12], sum = 0.0;
    int minus = 5;
    char c;
    cin >> c;
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            cin >> array[i][j];
        }
    }

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < i; j++)
        {
            sum = sum + array[i][j];
        }
    }

    int test = 7;

    for (int i = 6; i < 11; i++)
    {
        for (int j = 0; j < 12 - test; j++)
        {
            sum = sum + array[i][j];
        }
        test++;
    }

    if (c == 'S')
    {
        cout << fixed << setprecision(1) << sum << endl;
    }
    else
    {
        cout << fixed << setprecision(1) << sum / 30.0 << endl;
    }
    return 0;
}