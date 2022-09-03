// https://www.beecrowd.com.br/judge/en/problems/view/2003
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
    int h, s, dif = 0;
    while (!(cin >> h).eof())
    {
        scanf(":%d", &s);
        dif = ((h * 60) + s + 60) - 480;
        if (dif <= 0)
            dif = 0;
        cout << "Atraso maximo: " << dif << endl;
    }

    return 0;
}
