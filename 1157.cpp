

#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
    int num;
    cin >> num;

    for(int i =1; i<=num; i++) {
        if(num%i == 0) cout << i << endl;
    }

    return 0;
}
