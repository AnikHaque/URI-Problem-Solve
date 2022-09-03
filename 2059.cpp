// https://www.beecrowd.com.br/judge/en/problems/view/2059
// Tanjila Shamima
// Software Engineer at BJIT Group
// uri online problem solved by Tanjila Shamima
// personal website: https://tanjila-shamima.web.app/

#include <iostream>
#include <iomanip>
#include <bits/stdc++.h>
#include <math.h>
#include <string>

using namespace std;

int main()
{
    int p, j1, j2, r, a, win, sum;
    cin >> p >> j1 >> j2 >> r >> a;
    sum = j1 + j2;
    if((sum%2 == 0 && p == 1) || (sum%2 == 1 && p == 0)) win = 1;
    else win = 2;
    if((r == 1 && a == 0) || (r == 0 && a == 1)) win = 1;
    else if(r ==1 && a == 1) win = 2;
    cout << "Jogador " << win <<" ganha!" << endl;
    return 0;
}
