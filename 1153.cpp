

#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
    int n, sum=1;
    cin >> n;

    for( int i =1; i<=n; i++) {
        sum*= i;
    }

    cout << sum << endl;
}
