#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
    int n, min, p;

    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    min = arr[0];

    for (int i = 0; i < n; i++)
    {

        if (min > arr[i])
        {
            min = arr[i];
            p = i;
        }
    }

    cout << "Menor valor: " << min << endl;
    cout << "Posicao: " << p << endl;

    return 0;
}
