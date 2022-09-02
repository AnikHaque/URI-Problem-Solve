

#include<iostream>
#include<stdio.h>
#include<math.h>
#include<iomanip>
using namespace std;

int main() {

    int hour, speed;
    cin >> hour >> speed;

    double time = (hour * speed) / 12.0;

    cout << fixed << setprecision(3) << time << endl;

    return 0;
}