// https://www.beecrowd.com.br/judge/en/problems/view/1079
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
    float a, b, c;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a >> b >> c;
        cout << fixed << setprecision(1) << ((a * 2.0) + (b * 3.0) + (c * 5.0)) / (2 + 3 + 5) << endl;
    }

    return 0;
}
