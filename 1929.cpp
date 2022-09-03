// https://www.beecrowd.com.br/judge/en/problems/view/1929
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
    int a[4];
    for (int i = 0; i < 4; i++)
        cin >> a[i];
    sort(a, a + 4);
    if (a[0] + a[1] > a[2])
        cout << "S\n";
    else if (a[0] + a[2] > a[3])
        cout << "S\n";
    else if (a[1] + a[2] > a[3])
        cout << "S\n";
    else
        cout << "N\n";
    return 0;
}
