// https://www.beecrowd.com.br/judge/en/problems/view/1115
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

    int x, y;
    while (1)
    {
        cin >> x >> y;
        if (x == 0 || y == 0)
        {
            break;
        }
        else
        {
            if (x > 0)
            {
                if (y > 0)
                {
                    cout << "primeiro" << endl;
                }
                else
                {
                    cout << "quarto" << endl;
                }
            }
            else
            {
                if (y > 0)
                {
                    cout << "segundo" << endl;
                }
                else
                {
                    cout << "terceiro" << endl;
                }
            }
        }
    }
}
