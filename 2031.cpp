// https://www.beecrowd.com.br/judge/en/problems/view/2031
// Tanjila Shamima
// Software Engineer at BJIT Group
// uri online problem solved by Tanjila Shamima
// personal website: https://tanjila-shamima.web.app/

#include <iostream>
#include <iomanip>
#include <bits/stdc++.h>
#include <math.h>
#include <string>

using namespace std;

int main()
{
    int tst;
    string f, s;
    cin >> tst;
    while (tst--)
    {
        cin >> f;
        cin >> s;
        if (f[1] == 'e' && s[1] == 'e')
            cout << "Sem ganhador" << endl;
        else if (f[1] == 't' && s[1] == 't')
            cout << "Aniquilacao mutua" << endl;
        else if (f[1] == 'a' && s[1] == 'a')
            cout << "Ambos venceram" << endl;
        else if (f[1] == 't' || (f[1] == 'e' && s[1] == 'a'))
            cout << "Jogador 1 venceu" << endl;
        else
            cout << "Jogador 2 venceu" << endl;
    }

    return 0;
}
