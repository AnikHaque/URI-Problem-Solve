

#include <iostream>
#include <stdio.h>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{

    int a, b;
    cin >> a >> b;

    if (b % a == 0 || a % b == 0)
    {
        cout << "Sao Multiplos" << endl;
    }
    else
    {
        cout << "Nao sao Multiplos" << endl;
    }

    return 0;
}