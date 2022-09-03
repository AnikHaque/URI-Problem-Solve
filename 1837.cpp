// https://www.beecrowd.com.br/judge/en/problems/view/1837
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
    int a, b, q, r, e, f;

    cin >> a >> b;

    if (a < 0)
    {
        e = b;
        if (b < 0)
            e = b * -1;
        for (r = 0; r < e; r++)
        {
            f = a - r;
            if (f % b == 0)
                break;
        }
        q = f / b;
    }
    else
    {
        q = a / b;
        r = a % b;
    }

    cout << q << " " << r << endl;

    return 0;
}
