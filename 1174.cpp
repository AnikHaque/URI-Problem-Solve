

#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
    int n, min, p;

    float arr[100];

    for (int i = 0; i < 100; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < 100; i++)
    {
        if (arr[i] <= 10.0)
        {
            cout << "A[" << i << "] = " << fixed << setprecision(1) << arr[i] << endl;
        }
    }

    return 0;
}
