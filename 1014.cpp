


#include<iostream>
#include<stdio.h>
#include<math.h>
#include<iomanip>
using namespace std;

int main() {

    int distance;
    float fuelConsumption, averageConsumption;

    cin >> distance >> fuelConsumption;

    averageConsumption = distance / fuelConsumption;

    cout << fixed << setprecision(3) << averageConsumption <<" km/l" << endl;

    return 0;
}