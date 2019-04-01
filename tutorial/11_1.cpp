#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int N;

    int num = pow(10, 5) + 1;
    int t[num], x[num], y[num];

    cin >> N;

    t[0] = x[0] = y[0] = 0;
    for (int i = 0; i < N; i++)
    {
        cin >> t[i + 1] >> x[i + 1] >> y[i + 1];
    }

    bool can = true;

    for (int i = 0; i < N; i++)
    {
        int dt = t[i + 1] - t[i];
        int dxy = abs(x[i + 1] - x[i]) + abs(y[i + 1] - y[i]);

        if (dt < dxy)
        {
            can = false;
        }

        if ((dt % 2) != (dxy % 2))
        {
            can = false;
        }
    }

    if (can)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}