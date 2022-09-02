// https://www.beecrowd.com.br/judge/en/problems/view/1094
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

    int n, num, c = 0, r = 0, s = 0;
    cin >> n;
    char str;

    for (int i = 0; i < n; i++)
    {
        cin >> num >> str;

        if (str == 'C')
        {
            c += num;
        }
        if (str == 'R')
        {
            r += num;
        }
        if (str == 'S')
            s += num;
    }

    int total = c + r +s ;

    cout << "Total: " << total << " cobaias" << endl;
    cout << "Total de coelhos: " << c << endl;
    cout << "Total de ratos: " << r << endl;
    cout << "Total de sapos: " << s << endl;
    cout << "Percentual de coelhos: " << fixed << setprecision(2) << ((c * 100.0) / total) << " %" << endl;
    cout << "Percentual de ratos: " << fixed << setprecision(2) << ((r * 100.0) / total) << " %" << endl;
    cout << "Percentual de sapos: " << fixed << setprecision(2) << ((s * 100.0) / total) << " %" << endl;

    return 0;
}
