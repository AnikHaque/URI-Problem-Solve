// https://www.beecrowd.com.br/judge/en/problems/view/2029
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
    int i, j, k, l, m, n, o = 0;
    while (!(cin >> n).eof())
    {
        o++;
        k = 1;
        for (i = 1; i <= n; i++)
        {
            for (j = i; j > 0; j--)
            {
                k++;
            }
        }
        if (n == 0)
            cout << "Caso " << o << ": " << k << " numero" << endl;
        else
            cout << "Caso " << o << ": " << k << " numeros" << endl;
        cout << "0";
        for (i = 1; i <= n; i++)
        {
            for (j = i; j > 0; j--)
            {
                cout << " " << i;
            }
        }
        cout << endl;
        cout << endl;
    }

    return 0;
}
