// https://www.beecrowd.com.br/judge/en/problems/view/1177
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
    int p, q = 0;

    int N[1000];

    cin >> p;

    for (int i = 0; i < 1000; i++)
    {
        N[i] = q;
        if(q == p-1) q= 0;
        else q++;
    }

    for (int i = 0; i < 1000; i++)
    {
        cout << "N[" << i << "] = " << N[i] << endl;
    }

    return 0;
}
