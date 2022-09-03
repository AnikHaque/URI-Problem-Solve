// https://www.beecrowd.com.br/judge/en/problems/view/1984
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
    long long int n, temp, sum=0, rem;
    cin >> n;
    temp = n;
    while(temp!=0){
        rem = temp%10;
        temp/=10;
        cout << rem;
    }
    cout << endl;

    return 0;
}
