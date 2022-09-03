// https://www.beecrowd.com.br/judge/en/problems/view/1159
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
    int num, n=0;

    while (1)
    {
        cin >> num;
        int sum = 0;
        n = 0;
        if (num == 0)
            break;
        else {
            while(n < 5) {
                if(num %2 == 0){
                    sum+=num;
                    n++;
                }
                num++;
            }
            cout << sum << endl;
        }
    }

    return 0;
}
