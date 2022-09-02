// https://www.beecrowd.com.br/judge/en/problems/view/1071
// Tanjila Shamima
// Software Engineer at BJIT Group
// uri online problem solved by Tanjila Shamima
// personal website: https://tanjila-shamima.web.app/

#include <iostream>
#include <iomanip>
#include <stdio.h>

using namespace std;

int main()
{

    int m, n, sum=0, min, max;
    cin >> m >> n;

    if(m > n) {
        max = m;
        min = n;
    } else {
        max = n;
        min = m;
    }

    for(int i = min + 1; i< max; i++)
    {
        if(i % 2 != 0)
        {
            sum+=i;
        }
    }

    cout << sum << endl;

    return 0;
}
