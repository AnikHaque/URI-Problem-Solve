// https://www.beecrowd.com.br/judge/en/problems/view/1118
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
    int X, l, m, j;
    float n, i, a, b, c, d, o, avg, avg1, ar[2], br[2];
    while (1)
    {
        j = 0;
        for (i = 0; i < 100; i++)
        {
            cin >> n;
            if (n >= 0 && n <= 10)
            {
                ar[j] = n;
                j++;
            }
            else
                cout << "nota invalida" << endl;
            if (j == 2)
            {
                avg = (ar[0] + ar[1]) / 2;
                cout << "media = " << fixed << setprecision(2) << avg << endl;
                break;
            }
        }
        for (l = 0; l < 100; l++)
        {
            cin >> X;
            cout << "novo calculo (1-sim 2-nao)" << endl;
            if (X == 1 || X == 2)
                break;
        }
        if (X == 1)
            continue;
        else if (X == 2)
            break;
    }
    return 0;
}
