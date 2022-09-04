#include <iostream>
#include <iomanip>
#include <bits/stdc++.h>
#include <math.h>
#include <string>

using namespace std;

int main()
{
    string ch;
    int length = 0, i, t;
    double ans;
    cin >> t;
    while (t--)
    {
        cin >> ch;
        length = 0;
        for (i = 0; ch[i] != '\0'; i++)
        {
            length++;
        }
        ans = length * .01;
        cout << fixed << setprecision(2) << ans << endl;
    }
    return 0;
}
