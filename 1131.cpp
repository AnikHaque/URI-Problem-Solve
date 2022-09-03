// https://www.beecrowd.com.br/judge/en/problems/view/1131
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
    int x, y;
    int op;
    int inter = 0;
    int gremio = 0;
    int grenal = 0;
    int empate = 0;

    while (true)
    {
        cin >> x;
        cin >> y;

        if (x > y)
            inter++;
        if (x < y)
            gremio++;
        if (x == y)
            empate++;
        grenal++;

        cout << "Novo grenal (1-sim 2-nao)\n";
        cin >> op;

        if (op == 2)
            break;
    }
    cout << grenal << " grenais\n";
    cout << "Inter:" << inter << "\n";
    cout << "Gremio:" << gremio << "\n";
    cout << "Empates:" << empate << "\n";

    if (inter > gremio)
        cout << "Inter venceu mais\n";
    if (inter < gremio)
        cout << "Gremio venceu mais\n";
    if (inter == gremio)
        cout << "Nao houve vencedor\n";

    return 0;
}
