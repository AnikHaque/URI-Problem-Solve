#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{

    int test, a, b, max, min, sum = 0;
    while (1)
    {
        cin >> a >> b;
        if (a <= 0 || b <= 0)
            break;
        else
        {
            if (a > b)
            {
                max = a;
                min = b;
            }
            else
            {
                max = b;
                min = a;
            }
            sum = 0;

            for (int j = min; j <= max; j++)
            {   
                cout << j << " ";
                sum+=j;
            }

            cout << "Sum="<<sum << endl;

        }
    }
}
