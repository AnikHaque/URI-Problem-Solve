// https://www.beecrowd.com.br/judge/en/problems/view/2057
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
    int s, t, f, sum = 0;
    cin >> s >> t >> f;
    sum = s + t + f;
    sum = sum < 0 ? sum + 24 : sum;

    cout << sum % 24 << endl;
    return 0;
}
 