// https://www.beecrowd.com.br/judge/en/problems/view/1006
// Tanjila Shamima
// Software Engineer at BJIT Group

#include<iostream>
#include<stdio.h>
#include<math.h>
#include<iomanip>
using namespace std;

int main() {
    float a, b, c;
    cin >> a >> b >> c;
    cout <<"MEDIA = "<<fixed << setprecision(1)<<(((a*2)+(b*3)+(c*5))/(2+3+5))<<endl;

    return 0;
}