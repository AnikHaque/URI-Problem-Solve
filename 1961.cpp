// https://www.beecrowd.com.br/judge/en/problems/view/1961
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
    int p, q, cnt = 0, i, dif;
    cin >> p >> q;
    int jump[q];
    for (i = 0; i < q; i++)
        cin >> jump[i];
    for (i = 1; i < q; i++)
    {
        if (jump[i] > jump[i - 1])
            dif = (jump[i] - jump[i - 1]);
        else
            dif = (jump[i - 1] - jump[i]);
        if (dif <= p)
            cnt++;
    }
    if (cnt == q - 1)
        cout << "YOU WIN" << endl;
    else
        cout << "GAME OVER" << endl;
    return 0;
}
