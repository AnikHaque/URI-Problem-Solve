// https://www.beecrowd.com.br/judge/en/problems/view/1011
// Tanjila Shamima
// Software Engineer at BJIT Group
// uri online problem solved by Tanjila Shamima

#include<iostream>
#include<stdio.h>
#include<math.h>
#include<iomanip>
using namespace std;
int main() {
    int r;
    cin>>r;
    double res= (4.0/3 * 3.14159 * pow(r,3));
    cout<< fixed << setprecision(3)<<"VOLUME = "<<res<<endl; 

    return 0;
}