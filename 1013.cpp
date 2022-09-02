// https://www.beecrowd.com.br/judge/en/problems/view/1013
// Tanjila Shamima
// Software Engineer at BJIT Group
// uri online problem solved by Tanjila Shamima

#include<iostream>
#include<stdio.h>
#include<math.h>
#include<iomanip>
using namespace std;

int main() {
    int a, b, s;
    cin >> a >> b >> s;

    int ab = (a + b + (abs(a-b))) / 2;
    int abc = (ab + s + (abs(ab-s))) / 2;

    cout << abc <<" eh o maior"<< endl;

    return 0;
}