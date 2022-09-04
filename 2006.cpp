#include <iostream>
#include <iomanip>
#include <bits/stdc++.h>
#include <math.h>
#include <string>

using namespace std;

int main()
{
    int t, a[5], count = 0;
    cin >> t;

    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
        if(a[i] == t) count++;
    }
    cout << count << endl;

    return 0;
}
