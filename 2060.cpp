// https://www.beecrowd.com.br/judge/en/problems/view/2060
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
    int t, n, a = 0, b = 0, c = 0, d = 0;
    cin >> t;
    while (t--)
    {
        cin >> n;
        if (n % 2 == 0)
            a++;
        if (n % 3 == 0)
            b++;
        if (n % 4 == 0)
            c++;
        if (n % 5 == 0)
            d++;
    }
    cout << a << " Multiplo(s) de 2" << endl;
    cout << b << " Multiplo(s) de 3" << endl;
    cout << c << " Multiplo(s) de 4" << endl;
    cout << d << " Multiplo(s) de 5" << endl;
    return 0;
}
