

#include <iostream>
#include <iomanip>
#include <bits/stdc++.h>
#include <math.h>
#include <string>

using namespace std;

int main()
{
    int t;
    long long int c, d, e, f;
    string aa, bb, cc, dd, ee = "PAR", ff = "IMPAR";
    cin >> t;
    while (t--)
    {
        cin >> aa >> bb >> cc >> dd;
        cin >> c >> d;
        e = c + d;
        if (bb[0] == 'P')
        {
            if (e % 2 == 0)
                cout << aa << endl;
            else
                cout << cc << endl;
        }
        else
        {
            if (e % 2 == 0)
                cout << cc << endl;
            else
                cout << aa << endl;
        }
    }

    return 0;
}
