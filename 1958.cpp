

#include <iostream>
#include <iomanip>
#include <bits/stdc++.h>
#include <math.h>
#include <string>

using namespace std;

int main()
{
    long double num;
    string s;
    cin >> s >> num;
    if(s[0] != '-') cout << "+";
    else cout << "-";
    cout << num << endl;
    return 0;
}
