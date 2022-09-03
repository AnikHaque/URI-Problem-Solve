// https://www.beecrowd.com.br/judge/en/problems/view/1160
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
    int n, c, m;
    int a, b;
    double ac, bc;
    cin >> n;
    for (m = 1; m <= n; m++)
    {
        c = 0;
        cin >> a >> b >> ac >> bc;
        while (a <= b)
        {
            a *= (ac / 100.0) + 1.0;
            b *= (bc / 100.0) + 1.0;
            c++;
            if (c > 100)
            {
                cout << "Mais de 1 seculo." << endl;
                break;
            }
        }
        if (c <= 100)
            cout << c << " anos." << endl;
    }

    return 0;
}
