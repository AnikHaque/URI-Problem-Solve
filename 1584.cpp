

#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
    int n;
    while (!(cin >> n).eof())
    {
        if (n == 0)
        {
            printf("vai ter copa!\n");
        }
        else
        {
            printf("vai ter duas!\n");
        }
    }

    return 0;
}
