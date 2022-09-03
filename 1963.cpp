// https://www.beecrowd.com.br/judge/en/problems/view/1963
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
    double a, b;
    cin >> a >> b;
    cout << fixed << setprecision(2) << ((b - a) * 100.00 / a) << "%" << endl;
    return 0;
}
