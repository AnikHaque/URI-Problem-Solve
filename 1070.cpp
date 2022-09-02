
#include <iostream>
#include <iomanip>
#include <stdio.h>

using namespace std;

int main()
{

    int n, count = 0;
    cin >> n;

    int temp = n;

    while (count < 6)
    {
        if (temp % 2 != 0)
        {
            cout << temp << endl;
            count++;
        }

        temp++;
    }

    return 0;
}
