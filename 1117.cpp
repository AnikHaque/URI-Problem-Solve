
#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{

    float x, sum = 0;
    int num = 0;
    while (num < 2)
    {
        cin >> x ;

        if(x >= 0 && x <= 10) {
            num++;
            sum+= x;
        }
        else {
            cout << "nota invalida" << endl;
        }
        

    }
    cout << "media = " << fixed << setprecision(2) << sum / num << endl;
}
