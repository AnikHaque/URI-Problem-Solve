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
