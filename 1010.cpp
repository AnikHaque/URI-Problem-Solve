// https://www.beecrowd.com.br/judge/en/problems/view/1010
// Tanjila Shamima
// Software Engineer at BJIT Group
// uri online problem solved by Tanjila Shamima

#include<iostream>
#include<stdio.h>
#include<math.h>
#include<iomanip>
using namespace std;

int main() {
    int firstProductId, secondProductId, firstQuantity, secondQuantity;
    float firstPrice, secondPrice, totalPrice;
    cin >> firstProductId >> firstQuantity >> firstPrice;
    cin >> secondProductId >> secondQuantity >> secondPrice;

    totalPrice = (firstQuantity * firstPrice) + (secondQuantity * secondPrice);

    cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << totalPrice << endl;
    return 0;
}