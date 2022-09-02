// https://www.beecrowd.com.br/judge/en/problems/view/1002
// Tanjila Shamima
// Software Engineer at BJIT Group

#include<iostream>
#include<stdio.h>
#include<math.h>
#include<iomanip>

using namespace std;

int main() {
    double  pI = 3.14159;
    double  r;
    cin>>r;
    double  area = pI * r * r;
    cout <<"A="<< fixed << setprecision(4)<<area<<endl;
    return 0;
}