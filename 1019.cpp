// https://www.beecrowd.com.br/judge/en/problems/view/1019
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

    int n;
    cin >> n;

    int hour = n/3600;
    int restHour = n%3600;
    int minute = restHour/60;
    int restMinute = restHour%60;
    int second = restMinute;

    cout << hour << ":" << minute << ":" << second << endl;

    return 0;
}