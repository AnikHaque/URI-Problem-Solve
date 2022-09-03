


#include <iostream>
#include <iomanip>
#include <bits/stdc++.h>
#include <math.h>
#include <string>

using namespace std;

int main()
{
    string sentence = "LIFE IS NOT A PROBLEM TO BE SOLVED";
    transform(sentence.begin(), sentence.end(), sentence.begin(), ::toupper);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << sentence[i];
    }

    cout << endl;

    return 0;
}
