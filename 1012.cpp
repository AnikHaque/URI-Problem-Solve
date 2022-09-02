// https://www.beecrowd.com.br/judge/en/problems/view/1012
// Tanjila Shamima
// Software Engineer at BJIT Group
// uri online problem solved by Tanjila Shamima

#include<iostream>
#include<stdio.h>
#include<math.h>
#include<iomanip>

using namespace std;

int main() {
    float a, b, c;
    cin >> a >> b >> c;
    double triangle, trapezium, circle, square, rectangle;
    triangle = (a * c) / 2;
    trapezium = ((a + b) * c) / 2;
    circle = 3.14159 * pow(c, 2);
    square = pow(b, 2);
    rectangle = a * b;

    cout << "TRIANGULO: " << fixed << setprecision(3) << triangle << endl;
    cout << "CIRCULO: " << fixed << setprecision(3) << circle << endl;
    cout << "TRAPEZIO: " << fixed << setprecision(3) << trapezium << endl;
    cout << "QUADRADO: " << fixed << setprecision(3) << square << endl;
    cout << "RETANGULO: " << fixed << setprecision(3) << rectangle << endl;
    return 0;
}
