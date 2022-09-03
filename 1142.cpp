

#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
    int x, m = 0;

    cin >> x;

    for (int i =0; i< x; i++) {
        m++;
        for(int j = 1; j <= 3 ; j++) {
            cout << m <<" ";
            m++;
        }
        cout <<"PUM"<< endl;
    }


    return 0;
}
