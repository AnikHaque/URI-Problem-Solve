// https://www.beecrowd.com.br/judge/en/problems/view/1046
// Tanjila Shamima
// Software Engineer at BJIT Group
// uri online problem solved by Tanjila Shamima
// personal website: https://tanjila-shamima.web.app/

#include <iostream>
#include <stdio.h>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{

    int a, b;
    cin >> a >> b;

    if (b > a)
    {
        cout << "O JOGO DUROU " << (b - a) << " HORA(S)" << endl;
    }
    else if (a > b)
    {
        cout << "O JOGO DUROU " << ((24 - a) + b) << " HORA(S)" << endl;
    }
    else
    {
        cout << "O JOGO DUROU 24 HORA(S)" << endl;
    }

    return 0;
}