// https://www.beecrowd.com.br/judge/en/problems/view/1175
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
    int n, min, p;

    int arr[20];

    for (int i = 19; i >= 0; i--)
    {
        cin >> arr[i];
    }

    for (int i = 0; i <= 19; i++)
    {
        cout << "N[" << i << "] = " << arr[i] << endl;
    }

    return 0;
}
