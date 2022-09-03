

#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
    float sum = 1;
    for (int i = 2; i <= 100; i++)
    {
        sum+=(1* 1.0/i);
    }

    cout << fixed << setprecision(2) << sum << endl;
}
