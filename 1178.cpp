// https://www.beecrowd.com.br/judge/en/problems/view/1178
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
    double num;

    double N[100];

    cin >> num;

    for (int i = 0; i < 100; i++)
    {
        cout << "N[" << i << "] = " << fixed << setprecision(4) << num << endl;
        num = num/2;
    }

    return 0;
}
