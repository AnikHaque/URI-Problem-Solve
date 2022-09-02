// https://www.beecrowd.com.br/judge/en/problems/view/1008
// Tanjila Shamima
// Software Engineer at BJIT Group
//uri online problem solved by me

#include<iostream>
#include<stdio.h>
#include<math.h>
#include<iomanip>
using namespace std;

int main() {
    int employeeNumber, workingHours;
    float hourlySalary, totalSalary;
    cin >> employeeNumber >> workingHours >> hourlySalary;
    totalSalary = workingHours * hourlySalary;

    cout << "NUMBER = " << employeeNumber << endl;
    cout << "SALARY = U$ " << fixed << setprecision(2) << totalSalary << endl;
    return 0;
}