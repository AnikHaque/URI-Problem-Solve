// https://www.beecrowd.com.br/judge/en/problems/view/1061
// Tanjila Shamima
// Software Engineer at BJIT Group
// uri online problem solved by Tanjila Shamima
// personal website: https://tanjila-shamima.web.app/

#include <iostream>
#include <iomanip>
#include <stdio.h>

using namespace std;

int main()
{
    string s;
    int d1, d2, h1, h2, m1, m2, s1, s2;

    cin >> s >> d1;
    cin >> h1 >> s >> m1 >> s >> s1;
    cin >> s >> d2;
    cin >> h2 >> s >> m2 >> s >> s2;

    int result = ((d2 * 24 * 3600) + (h2 * 3600) + (m2 * 60) + s2) - ((d1 * 24 * 3600) + (h1 * 3600) + (m1 * 60) + s1);

    int days = ((result * 1.0) / (24 * 3600));
    int restDays = result % (24 * 3600);

    int hour = restDays * 1.0 /  3600;
    int restHour = restDays % 3600;

    int minutes = restHour * 1.0 / 60;
    int seconds = restHour % 60;

    cout << days << " dia(s)"<<endl;
    cout << hour << " hora(s)"<<endl;
    cout << minutes << " minuto(s)"<<endl;
    cout << seconds << " segundo(s)"<<endl;

    return 0;
}