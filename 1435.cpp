// https://www.beecrowd.com.br/judge/en/problems/view/1435
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
    int n, x;
    while (1)
    {
        cin >> n;
        if (n == 0)
            break;

        else
        {
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    x = i + 1;
                    if (j < x)
                        x = j + 1;
                    if (n - i < x)
                        x = n - i;
                    if (n - j < x)
                        x = n - j;

                    cout << setw(3) << x;

                    if (j < n - 1)
                    {

                        cout << " ";
                    }
                    else
                    {
                        cout << endl;
                    }
                }
            }
            cout << endl;
        }
    }
    return 0;
}
