#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        string x, s;
        cin >> x >> s;

        int operations = 0;

        for (int i = 0; i <= 6; i++)
        {

            if (x.find(s) != string::npos)
            {
                cout << operations << endl;
                break;
            }

            x += x;
            operations++;

            if (i == 6)
            {
                cout << -1 << endl;
            }
        }
    }
}