

#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
    int max = 0, n, m;
    while (!(cin >> n).eof())
    {

            max =0;
            for (int i = 0; i < n; i++)
            {
                cin >> m;
                if (max < m)
                    max = m;
            }

            if (max < 10)
            {
                cout << "1" << endl;
            }
            else if (max < 20)
            {
                cout << "2" << endl;
            }
            else
            {
                cout << "3" << endl;
            }
        }
    

    return 0;
}
