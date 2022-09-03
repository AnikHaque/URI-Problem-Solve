

#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
    int arr[10], n, j = 1, test= 0;

    cin >> n;


    for (int i = 0; i<= 9; i++) {

        cout << "N[" << i <<"] = " << n << endl;
        n*=2;
    }

    

    return 0;
}
