// https://www.beecrowd.com.br/judge/en/problems/view/1858
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
    int n, pos = 0;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int min = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
            pos = i;
        }
    }

    cout << pos + 1 << endl;

    return 0;
}
