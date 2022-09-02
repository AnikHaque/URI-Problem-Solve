// https://www.beecrowd.com.br/judge/en/problems/view/1073
// Tanjila Shamima
// Software Engineer at BJIT Group
// uri online problem solved by Tanjila Shamima
// personal website: https://tanjila-shamima.web.app/

#include <iostream>
#include <iomanip>
#include <stdio.h>
#include<math.h>

using namespace std;

int main()
{

    int n;
    cin >> n;

    for(int i = 1; i <= n; i++)
    {

        if(i%2 == 0) {
            cout << i << "^2 = " << i*i << endl;
        }
        
    }

    return 0;
}
