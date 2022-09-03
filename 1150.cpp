
#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
    int x, z, i, j, sum = 0, count = 0;
    cin >> x;
    while (1)
    {
        cin >> z;
        if (x < z)
        {
            for (i = x; sum < z; i++)
            {
                sum += i;
                count++;
            }
            break;
        }
    }
    cout << count << endl;

    return 0;
}
