// https://www.beecrowd.com.br/judge/en/problems/view/1036
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

    double a, b, c;
    cin >> a >> b >> c;

    if (((b * b) - 4 * a * c) < 0 || a == 0)
    {
        cout << "Impossivel calcular" << endl;
    }
    else
    {
        double x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
        double x2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);

        cout << "R1 = " << fixed << setprecision(5) << x1 << endl;
        cout << "R2 = " << fixed << setprecision(5) << x2 << endl;
    }

    return 0;
}