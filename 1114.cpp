

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
