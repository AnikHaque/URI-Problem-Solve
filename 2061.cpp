// https://www.beecrowd.com.br/judge/en/problems/view/2061
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
    int i, a, b, count;
    string ch;
    cin >> a >> b;
    count = a;
    while (b--)
    {
        cin >> ch;
        if (ch[0] == 'f')
            count++;
        else
            count--;
    }
    cout << count << endl;
    return 0;
}
