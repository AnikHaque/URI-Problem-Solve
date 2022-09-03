// https://www.beecrowd.com.br/judge/en/problems/view/1114
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

    int test;
    while (1)
    {
        cin >> test;
        if (test == 2002)
        {
            cout << "Acesso Permitido" << endl;
            break;
        }
        else
        {
            cout << "Senha Invalida" << endl;
        }
    }
}
