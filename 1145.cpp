// https://www.beecrowd.com.br/judge/en/problems/view/1145
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
    int m, n, max, min;

    cin >> m >> n;

    if (m > n)
    {
        min = n;
        max = m;
    }
    else
    {
        min = m;
        max = n;
    }


    for(int i =1; i<= max; i+=min) {
        int test = i;
        for(int j = 1; j<=min; j++) {
            if(j< min) cout << test << " ";
            else cout << test << endl;
            test++;
        }
    }

    return 0;
}
