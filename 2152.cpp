// https://www.beecrowd.com.br/judge/en/problems/view/2152
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
    int tst, h, m, o;
    cin >> tst;
    while (tst--)
    {
        cin >> h >> m >> o;
        if (h < 10)
            cout << "0" << h << ":";
        else
            cout << h << ":";
        if (m < 10)
            cout << "0" << m;
        else
            cout << m;
        if (o == 0)
            cout << " - A porta fechou!" << endl;
        else
            cout << " - A porta abriu!" << endl;
    }
    return 0;
}
