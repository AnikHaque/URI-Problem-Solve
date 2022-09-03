// https://www.beecrowd.com.br/judge/en/problems/view/1133
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
    int x, a = 0, g = 0, d = 0;

    while (1)
    {
        cin >> x;

        if (x < 1 || x > 4)
            continue;

        if (x == 4)
            break;
        else
        {
            if (x == 1)
                a++;
            else if (x == 2)
                g++;
            else if (x == 3)
                d++;
        }
    }

    cout << "MUITO OBRIGADO" << endl;
    cout << "Alcool: " << a << endl;
    cout << "Gasolina: " << g << endl;
    cout << "Diesel: " << d << endl;

    return 0;
}
