

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
