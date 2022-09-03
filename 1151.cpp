

#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
    int n, count = 1;
    cin >> n;
    int i = 0, j = 1, test;

    for (int k = 1; k < n; k++)
    {
        cout << i << " ";
        test = i + j;
        i = j;
        j = test;
    }

    cout << i << endl;

    return 0;
}
