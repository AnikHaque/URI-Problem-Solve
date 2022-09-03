// https://www.beecrowd.com.br/judge/en/problems/view/1983
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
    int i, t, n[200], p;
    double j = 0.0, value[200];
    cin >> t;
    for (i = 1; i <= t; i++)
    {
        cin >> n [i] >> value [i];
        if (value[i] > j)
        {
            j = value[i];
            p = n[i];
        }
    }
    if (j >= 8)
        cout << p << endl;
    else
        cout << "Minimum note not reached" << endl;

    return 0;
}
