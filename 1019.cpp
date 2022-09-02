


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