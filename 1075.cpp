// https://www.beecrowd.com.br/judge/en/problems/view/1075
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

    int n;
    cin >> n;

    for (int i = 1; i <= 10000; i++)
    {
        if(i%n == 2) {
            cout << i << endl;
        }
    }

    return 0;
}
