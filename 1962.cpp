// https://www.beecrowd.com.br/judge/en/problems/view/1962
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
    int tst;
    cin >> tst;
    while (tst--)
    {
        int year, dif;
        cin >> dif;
        if (dif < 2015)
        {
            year = 2015 - dif;
            cout << year << " D.C." << endl;
        }
        else
        {
            year = dif - 2014;
            cout << year << " A.C." << endl;
        }
    }
    return 0;
}
