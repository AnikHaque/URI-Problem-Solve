

#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
    int n, min, p;

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> p;
        cout << "resposta " << i << ": " << p << endl;
    }

    return 0;
}
