#include <iostream>
#include <stdio.h>
#include <math.h>
#include <iomanip>
using namespace std;

int main() {

    float a, b, c;
    cin >> a >> b >> c;

    if((a+b) > c && (a+c) > b && (b+c) > a) {
        cout << "Perimetro = " << fixed << setprecision(1) << (a + b+ c) << endl;
    } else {
        cout << "Area = " << fixed << setprecision(1) << (0.5*(a+b) *c) << endl;
    }

    return 0;
}
