// https://www.beecrowd.com.br/judge/en/problems/view/1009
// Tanjila Shamima
// Software Engineer at BJIT Group
// uri online problem solved by Tanjila Shamima

#include<iostream>
#include<stdio.h>
#include<math.h>
#include<iomanip>
using namespace std;
int main() {
    string name;
    double salary, productSale, totalSalary;
    cin >> name >> salary >> productSale;
    totalSalary = salary + (productSale * 0.15);
    cout << "TOTAL = R$ " << fixed << setprecision(2) << totalSalary << endl;
    return 0;
}