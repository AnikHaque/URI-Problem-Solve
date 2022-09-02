// https://www.beecrowd.com.br/judge/en/problems/view/1017
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

    int hour, speed;
    cin >> hour >> speed;

    double time = (hour * speed) / 12.0;

    cout << fixed << setprecision(3) << time << endl;

    return 0;
}