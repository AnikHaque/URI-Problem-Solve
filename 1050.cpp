// https://www.beecrowd.com.br/judge/en/problems/view/1050
// Tanjila Shamima
// Software Engineer at BJIT Group
// uri online problem solved by Tanjila Shamima
// personal website: https://tanjila-shamima.web.app/

#include <iostream>
#include <stdio.h>
#include <math.h>
#include <iomanip>
using namespace std;

int main() {

    int n;
    cin >> n;

    if(n == 61) {
        cout << "Brasilia" << endl;
    } else if(n == 71) {
        cout << "Salvador" << endl;
    } else if(n == 11) {
        cout << "Sao Paulo" << endl;
    } else if(n == 21) {
        cout << "Rio de Janeiro" << endl;
    } else if(n == 32) {
        cout << "Juiz de Fora" << endl;
    } else if(n == 19) {
        cout << "Campinas" << endl;
    } else if(n == 27) {
        cout << "Vitoria" << endl;
    } else if(n == 31) {
        cout << "Belo Horizonte" << endl;
    } else {
        cout << "DDD nao cadastrado" << endl;
    }

    return 0;
}