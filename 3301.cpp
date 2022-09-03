// https://www.beecrowd.com.br/judge/en/problems/view/3301
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

    if( (a > b && a < c) ||( a > c && a < b)) cout << "huguinho" << endl;
    else if( (b > a && b < c) ||( b > c && b < a)) cout << "zezinho" << endl;
    else cout << "luisinho" << endl;

    return 0;
}
