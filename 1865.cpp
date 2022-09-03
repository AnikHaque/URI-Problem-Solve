// https://www.beecrowd.com.br/judge/en/problems/view/1865
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
    int t, n, i;
    string sentence;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> sentence;
        cin >> n;
        if(sentence[0] == 'T' && sentence[1] == 'h' && sentence[2] == 'o' && sentence[3] == 'r') {
            cout << 'Y' << endl;
        } else {
            cout <<'N' << endl;
        }
    }

    return 0;
}
