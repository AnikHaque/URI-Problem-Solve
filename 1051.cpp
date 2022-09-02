// https://www.beecrowd.com.br/judge/en/problems/view/1051
// Tanjila Shamima
// Software Engineer at BJIT Group
// uri online problem solved by Tanjila Shamima
// personal website: https://tanjila-shamima.web.app/

#include <iostream>
#include <stdio.h>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{

    double number;
    cin >> number;

    if (number <= 2000)
    {
        cout << "Isento" << endl;
    }
    else if (number <= 3000)
    {
        cout << "R$ " << fixed << setprecision(2) << (number - 2000) * 0.08 << endl;
    }
    else if (number <= 4500)
    {
        cout << "R$ " << fixed << setprecision(2) << (number - 3000) * 0.18 + (1000 * 0.08) << endl;
    }
    else
    {
        cout << "R$ " << fixed << setprecision(2) << (number - 4500) * 0.28 + (1500 * 0.18) + (1000 * 0.08) << endl;
    }

    return 0;
}