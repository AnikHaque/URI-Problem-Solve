

#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
    int n, p;

    long long int arr[61];

    arr[0] = 0;
    arr[1] = 1;


    for (int i = 2; i<61; i++)
    {
        arr[i] = arr[i -1] + arr[i-2];
    }

       cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> p;
        cout <<"Fib(" << p <<") = " << arr[p] << endl;
    }

    return 0;
}
