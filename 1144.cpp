// https://www.beecrowd.com.br/judge/en/problems/view/1144
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

    for (int i = 1; i <= n; i++)
    {
        cout << i << " " << i * i << " " << i * i * i << endl;
        cout << i << " " << i * i + 1 << " " << i * i * i + 1 << endl;
    }

    return 0;
}
