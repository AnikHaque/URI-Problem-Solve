// https://www.beecrowd.com.br/judge/en/problems/view/1149
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
    int a, n;

    int soma = 0;

    while (cin >> a)
    {
        cin >> n;
        while (n <= 0)
        {
            cin >> n;
        }
        for (int i = 0; i < n; i++)
        {
            soma += (a + i);
        }
        cout << soma << endl;
        soma = 0;
    }
    return 0;
}
