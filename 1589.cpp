

#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
    int n, x, y;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        cout << x+y << endl;
    }
    
    return 0;
}
