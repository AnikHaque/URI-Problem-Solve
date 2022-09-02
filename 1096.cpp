// https://www.beecrowd.com.br/judge/en/problems/view/1096
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

    for (int i = 1; i <= 9; i += 2)
    {
        for (int j = 7; j >= 5; j--)
        {
            cout << "I=" << i << " J=" << j << endl;
        }
    }

    return 0;
}
