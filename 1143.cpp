// https://www.beecrowd.com.br/judge/en/problems/view/1143
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
    int x, m = 0;

    cin >> x;

    for (int i = 1; i <= x; i++)
    {
        m = i;
        for (int j = 1; j <= 3; j++)
        {
            if (j < 3)
            {
                cout << m << " ";
            }
            else
            {
                cout << m << endl;
            }
            m = m * i;
        }
    }

    return 0;
}
