

#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{

    int arr[100], max = 0, p;

    for(int i =0; i<100; i++) {
        cin >> arr[i];
        if(max < arr[i]) {
            max = arr[i];
            p = i+1;
        }
    }

    cout << max << endl;
    cout <<p << endl;

    return 0;
}
