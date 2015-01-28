/*
ID: me42
PROG: friday
LANG: C++
*/
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin ("friday.in");
    ofstream fout ("friday.out");

    int arr[7] = {0, 0, 0, 0, 0, 0, 0};
    int normal[12] = {31, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30};
    int leap[12] = {31, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30};

    int a, s, t;
    fin >> a;

    s = (-18);
    for (int i = 1900; i <= 1900 + (a - 1); i++)
    {
        if (i%100 != 0)
        {
            if (i%4 == 0)
            {
                for (int j = 0; j <= 11; j++)
                {
                    s = s + leap[j];
                    t = (s-1)%7;
                    arr[t] = arr[t] + 1;
                }
            }

            else if (i%4 != 0)
            {
                for (int j = 0; j <= 11; j++)
                {
                    s = s + normal[j];
                    t = (s-1)%7;
                    arr[t] = arr[t] + 1;
                }
            }
        }

        else if (i%100 == 0)
        {
            if ((i/100)%4 == 0)
            {
                for (int j = 0; j <= 11; j++)
                {
                    s = s + leap[j];
                    t = (s-1)%7;
                    arr[t] = arr[t] + 1;
                }
            }

            else if ((i/100)%4 != 0)
            {
                for (int j = 0; j <= 11; j++)
                {
                    s = s + normal[j];
                    t = (s-1)%7;
                    arr[t] = arr[t] + 1;
                }
            }
        }
    }

    fout << arr[5] << ' ' << arr[6] << ' ' << arr[0] << ' ' << arr[1] << ' ' << arr[2] << ' ' << arr[3] << ' ' << arr[4] << endl;
    return 0;
}
