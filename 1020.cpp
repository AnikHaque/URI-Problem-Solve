// https://www.beecrowd.com.br/judge/en/problems/view/1020
// Tanjila Shamima
// Software Engineer at BJIT Group
// uri online problem solved by Tanjila Shamima
// personal website: https://tanjila-shamima.web.app/

#include<iostream>
#include<stdio.h>
#include<math.h>
#include<iomanip>
using namespace std;

int main() {

    int ages;
    cin >> ages;

    int year = ages/365;
    int restYear = ages%365;
    int month = restYear/30;
    int restMonth = restYear%30;
    int day = restMonth;

    cout << year << " ano(s)" << endl;
    cout << month << " mes(es)" << endl;
    cout << day << " dia(s)" << endl;

    return 0;
}