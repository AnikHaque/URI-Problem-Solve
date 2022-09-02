// https://www.beecrowd.com.br/judge/en/problems/view/1014
// Tanjila Shamima
// Software Engineer at BJIT Group
// uri online problem solved by Tanjila Shamima


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