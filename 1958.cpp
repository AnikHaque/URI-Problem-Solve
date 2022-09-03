// https://www.beecrowd.com.br/judge/en/problems/view/1958
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
    long double num;
    string s;
    cin >> s >> num;
    if(s[0] != '-') cout << "+";
    else cout << "-";
    cout << num << endl;
    return 0;
}
