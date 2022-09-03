// https://www.beecrowd.com.br/judge/en/problems/view/1985
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
    int t, num, value;
    double sum = 0, price = 0;
    cin >> t;
    while (t--)
    {
        cin >> num >> value;
        if (num == 1001)
            price = value * 1.50;
        else if (num == 1002)
            price = value * 2.50;
        else if (num == 1003)
            price = value * 3.50;
        else if (num == 1004)
            price = value * 4.50;
        else if (num == 1005)
            price = value * 5.50;

        sum += price;
    }
    cout << fixed << setprecision(2) << sum << endl;

    return 0;
}
