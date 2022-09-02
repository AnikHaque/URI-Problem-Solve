// https://www.beecrowd.com.br/judge/en/problems/view/1015
// Tanjila Shamima
// Software Engineer at BJIT Group
// uri online problem solved by Tanjila Shamima


#include<iostream>
#include<stdio.h>
#include<math.h>
#include<iomanip>
using namespace std;

int main () {
    double x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    double dist = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    cout << fixed << setprecision(4) << dist << endl;

    return 0;
}