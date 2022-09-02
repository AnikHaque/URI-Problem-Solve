// https://www.beecrowd.com.br/judge/en/problems/view/1038
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

    int code, amount;
    cin >> code >> amount;

    if(code == 1) {
        cout << "Total: R$ " << fixed << setprecision(2) << amount * 4.00 << endl;
    } else if(code == 2) {
        cout << "Total: R$ " << fixed << setprecision(2) << amount * 4.50 << endl;
    } else if(code == 3) {
        cout << "Total: R$ " << fixed << setprecision(2) << amount * 5.00 << endl;
    } else if(code == 4) {
        cout << "Total: R$ " << fixed << setprecision(2) << amount * 2.00 << endl;
    } else if(code == 5) {
        cout << "Total: R$ " << fixed << setprecision(2) << amount * 1.50 << endl;
    }

    return 0;
}