// https://www.beecrowd.com.br/judge/en/problems/view/1021
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
    double n;
    cin >> n;

    int number = n * 100;
    int number2 = n;

    int hundrade = number2 / 100;
    int restHundrade = number2 % 100;
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

    int newNumber = number%100;
    int newFifty = newNumber/50;
    int newFiftyRest = newNumber%50;
    int newTwentyFive = newFiftyRest/25;
    int newTwentyFiveRest = newFiftyRest%25;
    int newTen = newTwentyFiveRest/10;
    int newTenRest = newTwentyFiveRest%10;
    int newFive = newTenRest/5;
    int newFiveRest = newTenRest%5;
    int newOne = newFiveRest;

    cout << "NOTAS:" << endl;
    cout << hundrade << " nota(s) de R$ 100.00" << endl;
    cout << fiftys << " nota(s) de R$ 50.00" << endl;
    cout << twenties << " nota(s) de R$ 20.00" << endl;
    cout << tens << " nota(s) de R$ 10.00" << endl;
    cout << fives << " nota(s) de R$ 5.00" << endl;
    cout << twos << " nota(s) de R$ 2.00" << endl;
    cout << "MOEDAS:" << endl;
    cout << ones << " moeda(s) de R$ 1.00" << endl;
    cout << newFifty << " moeda(s) de R$ 0.50" << endl;
    cout << newTwentyFive << " moeda(s) de R$ 0.25" << endl;
    cout << newTen << " moeda(s) de R$ 0.10" << endl;
    cout << newFive << " moeda(s) de R$ 0.05" << endl;
    cout << newOne << " moeda(s) de R$ 0.01" << endl;


    return 0;
}