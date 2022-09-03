// https://www.beecrowd.com.br/judge/en/problems/view/1847
// Tanjila Shamima
// Software Engineer at BJIT Group
// uri online problem solved by Tanjila Shamima
// personal website: https://tanjila-shamima.web.app/

#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (b > a && c <= b)
        cout << ":(" << endl;
    else if (b > a && c > b && (c - b) < (b - a))
        cout << ":(" << endl;
    else if (b > a && c > b && (c - b) >= (b - a))
        cout << ":)" << endl;
    else if (b < a && c < b && (b - c) < (a - b))
        cout << ":)" << endl;
    else if (b < a && c < b && (b - c) >= (a - b))
        cout << ":(" << endl;
    else if ((a == b) && c > b)
        cout << ":)" << endl;
    else if ((a == b) && c < b)
        cout << ":(" << endl;
    else if (b < a && c >= b)
        cout << ":)" << endl;
    else
        cout << ":(" << endl;
    return 0;
}
