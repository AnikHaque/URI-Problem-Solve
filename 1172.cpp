// https://www.beecrowd.com.br/judge/en/problems/view/1172
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
    int arr[10];

    for (int i =0; i< 10; i++) {
        cin >> arr[i];
        if(arr[i] <1) arr[i] = 1;
    }

    for (int i =0; i< 10; i++) {
        cout << "X[" << i <<"] = " << arr[i] << endl;
    }

    

    return 0;
}
