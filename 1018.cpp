// https://www.beecrowd.com.br/judge/en/problems/view/1018
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

    int hundrades = n / 100;
    int restHundrade = n % 100;
    int fiftys = restHundrade / 50;
    int restFifty = restHundrade % 50;
    int twenties = restFifty / 20;
    int restTwenty = restFifty % 20;
    int tens = restTwenty / 10;
    int restTen = restTwenty % 10;
    int fives = restTen / 5;
    int restFive = restTen % 5;
    int twos = restFive / 2;
    int restTwo = restFive % 2;
    int ones = restTwo;

    cout << n << endl;
    cout << hundrades << " nota(s) de R$ 100,00" << endl;
    cout << fiftys << " nota(s) de R$ 50,00" << endl;
    cout << twenties << " nota(s) de R$ 20,00" << endl;
    cout << tens << " nota(s) de R$ 10,00" << endl;
    cout << fives << " nota(s) de R$ 5,00" << endl;
    cout << twos << " nota(s) de R$ 2,00" << endl;
    cout << ones << " nota(s) de R$ 1,00" << endl;


    return 0;
}

