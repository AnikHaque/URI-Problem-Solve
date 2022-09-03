// https://www.beecrowd.com.br/judge/en/problems/view/1184
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
    double arra[12][12], sum = 0.0;
    char c;
    cin >> c;
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            cin >> arra[i][j];
        }
    }

    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            if (i > j)
                sum = sum + arra[i][j];
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
