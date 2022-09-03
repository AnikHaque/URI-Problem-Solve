// https://www.beecrowd.com.br/judge/en/problems/view/1534
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
    while (!(cin >> n).eof())
    {
        int arr[n][n];
        int k = n - 1;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == j)
                    arr[i][j] = 1;
                else if (j == k)
                    arr[i][j] = 2;
                else
                    arr[i][j] = 3;
            }
            k--;
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << arr[i][j];
            }

            cout << endl;
        }
    }
    return 0;
}
