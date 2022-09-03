// https://www.beecrowd.com.br/judge/en/problems/view/1132
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
    int x, y, min, max, sum = 0;
    cin >> x >> y;

    if( x > y) {
        min = y;
        max = x;
    } else {
        min = x;
        max = y;
    }

    for(int i = min; i <= max; i++) {
        if(i%13 != 0) sum+= i;
    }

    cout << sum << endl;

   return 0; 
}
