// https://www.beecrowd.com.br/judge/en/problems/view/1047
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

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int dif = ((c*60)+d) - ((a*60)+b);
    if(dif<=0) dif += 24*60;

    cout << "O JOGO DUROU " << dif/60 << " HORA(S) E " << dif%60 <<" MINUTO(S)"<< endl;

    return 0;
}