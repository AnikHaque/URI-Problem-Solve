// https://www.beecrowd.com.br/judge/en/problems/view/1165
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
        int count = 0;

        for (int i = 2; i < num; i++)
        {
            if (num % i == 0)
                count++;
        }

        if (count == 0)
        {
            cout << num << " eh primo" << endl;
        }
        else
        {
            cout << num << " nao eh primo" << endl;
        }

        test--;
    }

    return 0;
}
