// https://www.beecrowd.com.br/judge/en/problems/view/1113
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

    int test, a, b, max, min, sum = 0;
    while (1)
    {
        cin >> a >> b;
        if (a == b)
            break;
        else
        {
            if (a > b)
            {
                cout << "Decrescente" << endl;
            }
            else
            {
                cout << "Crescente" << endl;
            }
        }
    }
}
