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
