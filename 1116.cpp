// https://www.beecrowd.com.br/judge/en/problems/view/1116
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

    int x, y, test;
    cin >> test;
    while (test > 0)
    {
        cin >> x >> y;

        if (y == 0)
        {
            cout << "divisao impossivel" << endl;
        }
        else
        {
            cout << fixed << setprecision(1) << (x * 1.0 / y) << endl;
        }

        test--;
    }
}
