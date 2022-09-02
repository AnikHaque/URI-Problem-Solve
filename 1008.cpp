

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