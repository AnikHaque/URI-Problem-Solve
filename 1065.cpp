#include<iostream>
#include<iomanip>
#include<stdio.h>

using namespace std;

int main() {
    int arr[5], count = 0;

    for(int i = 0; i< 5; i++) {
        cin >> arr[i];
        if(arr[i] % 2 == 0) count ++;
    }

    cout << count << " valores pares" << endl;


    return 0;
}