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
    int x, y, min, max;
    cin >> x >> y;

    if (x > y)
    {
        min = y;
        max = x;
    }
    else
    {
        min = x;
        max = y;
    }

    for (int i = min + 1; i < max; i++)
    {
        if (i % 5 == 2 || i % 5 == 3)
            cout << i << endl;
    }


    return 0;
}
