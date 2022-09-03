// https://www.beecrowd.com.br/judge/en/problems/view/1866
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
    int t, n;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        int ans = n % 2 == 0 ? 0 : 1;
        cout << ans << endl;
    }

    return 0;
}
