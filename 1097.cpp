// https://www.beecrowd.com.br/judge/en/problems/view/1097
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

    int i, j, m = 7;
    for (i = 1; i <= 9; i += 2)
    {
        for (j = 1; j <= 3; j++)
        {
            cout << "I=" << i << " J=" << m << endl;
            m--;
        }
        m += 5;
    }

    return 0;
}
