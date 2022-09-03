

#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
    int m;

    while(1) {
        cin >> m;
        if(m ==0) break;
        else {
            for(int i = 1; i<=m; i++) {
                if(i < m) cout << i << " ";
                else cout << i << endl;
            }
        }
    }

    return 0;
}
