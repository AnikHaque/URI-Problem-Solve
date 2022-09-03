// https://www.beecrowd.com.br/judge/en/problems/view/1098
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

    float i = 0;
    float j = 1;
    while (i <= 2.1)
    {
        cout << "I=" << i << " "
             << "J=" << j + i << "\n";
        cout << "I=" << i << " "
             << "J=" << j + 1 + i << "\n";
        cout << "I=" << i << " "
             << "J=" << j + 2 + i << "\n";
        i += 0.2;
    }
    return 0;
}
