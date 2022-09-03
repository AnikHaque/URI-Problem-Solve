

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
