// https://www.beecrowd.com.br/judge/en/problems/view/1154
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
    int age, sum = 0, count = 0;

    while (1)
    {
        cin >> age;

        if (age < 0)
            break;
        else
        {
            sum += age;
            count++;
        }
    }

    cout << fixed << setprecision(2) << sum * 1.0 / count << endl;
}
