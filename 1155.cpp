// https://www.beecrowd.com.br/judge/en/problems/view/1155
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
    float sum = 1;
    for (int i = 2; i <= 100; i++)
    {
        sum+=(1* 1.0/i);
    }

    cout << fixed << setprecision(2) << sum << endl;
}
