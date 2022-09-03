

#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
    int a, b, c;
    int ans;
    while(1){
        cin >> a;

        if(a ==0) break;
        else {
            cin >> b >> c;
            ans = sqrt((a * b * 100.0)/c);

            cout << ans << endl;
        }
    }
    return 0;
}
