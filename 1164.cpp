// https://www.beecrowd.com.br/judge/en/problems/view/1164
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
    int test, num, n = 0;

    cin >> test;

    while (test > 0)
    {
        cin >> num;
        int sum = 0;

        for (int i = 1; i < num; i++)
        {
            if (num % i == 0)
                sum += i;
        }

        if (num == sum)
        {
            cout << num << " eh perfeito" << endl;
        }
        else
        {
            cout << num << " nao eh perfeito" << endl;
        }

        test--;
    }

    return 0;
}
