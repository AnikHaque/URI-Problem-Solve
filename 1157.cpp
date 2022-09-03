// https://www.beecrowd.com.br/judge/en/problems/view/1157
// Tanjila Shamima
// Software Engineer at BJIT Group
// uri online problem solved by Tanjila Shamima
// personal website: https://tanjila-shamima.web.app/

#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
    int num;
    cin >> num;

    for(int i =1; i<=num; i++) {
        if(num%i == 0) cout << i << endl;
    }

    return 0;
}
