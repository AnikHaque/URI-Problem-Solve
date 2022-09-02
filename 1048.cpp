// https://www.beecrowd.com.br/judge/en/problems/view/1048
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

    double salary;
    cin >> salary;

    if (salary <= 400)
    {
        cout << "Novo salario: " << fixed << setprecision(2) << salary * 1.15 << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << (salary * 1.15 - salary) << endl;
        cout << "Em percentual: 15 %" << endl;
    }
    else if (salary > 400 && salary <= 800)
    {
        cout << "Novo salario: " << fixed << setprecision(2) << salary * 1.12 << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << (salary * 1.12 - salary) << endl;
        cout << "Em percentual: 12 %" << fixed << setprecision(2) << endl;
    }
    else if (salary > 800 && salary <= 1200)
    {
        cout << "Novo salario: " << fixed << setprecision(2) << salary * 1.10 << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << (salary * 1.10 - salary) << endl;
        cout << "Em percentual: 10 %" << endl;
    }
    else if (salary > 1200 && salary <= 2000)
    {
        cout << "Novo salario: " << fixed << setprecision(2) << salary * 1.07 << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << (salary * 1.07 - salary) << endl;
        cout << "Em percentual: 7 %" << endl;
    }
    else
    {
        cout << "Novo salario: " << fixed << setprecision(2) << salary * 1.04 << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << (salary * 1.04 - salary) << endl;
        cout << "Em percentual: 4 %" << endl;
    }

    return 0;
}
