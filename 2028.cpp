// https://www.beecrowd.com.br/judge/en/problems/view/2028
// Tanjila Shamima
// Software Engineer at BJIT Group
// uri online problem solved by Tanjila Shamima
// personal website: https://tanjila-shamima.web.app/

#include <iostream>
#include <iomanip>
#include <bits/stdc++.h>
#include <math.h>
#include <string>

using namespace std;

int main()
{
    double v, r, h, d, a;
    while (!(cin >> v >> d).eof())
    {
        r = d / 2;
        a = 3.14 * r * r;
        h = v / a;
        cout << "ALTURA = " << fixed << setprecision(2) << h << endl;
        cout << "AREA = " << fixed << setprecision(2) << a << endl;
    }

    return 0;
}
