// https://www.beecrowd.com.br/judge/en/problems/view/1072
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

    int n, num, in = 0, out = 0;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> num;

        if(num <= 20 && num >= 10)
        {
            in++;
        } else {
            out++;
        }
    }

    cout << in << " in" << endl;
    cout << out << " out" << endl;

    return 0;
}
