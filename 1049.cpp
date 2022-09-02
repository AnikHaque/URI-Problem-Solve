// https://www.beecrowd.com.br/judge/en/problems/view/1049
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
    string s, t, v;
    cin >> s;

    if (s == "vertebrado") {
        cin >> t;

        if(t == "ave") {
            cin >> v;
            if(v == "carnivoro") {
                cout << "aguia" << endl;
            } else {
                cout << "pomba" << endl;
            }
        }
        else {
            cin >> v;
            if(v == "onivoro") {
                cout << "homem" << endl;
            } else {
                cout << "vaca" << endl;
            }
        }
    }
    else {
        cin >> t;
        if(t == "inseto") {
            cin >> v;
            if(v == "hematofago") {
                cout << "pulga" << endl;
            } else {
                cout << "lagarta" << endl;
            }
        }
        else {
            cin >> v;
            if(v == "hematofago") {
                cout << "sanguessuga" << endl;
            } else {
                cout << "minhoca" << endl;
            }
        }
    }

    return 0;
}