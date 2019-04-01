#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int y;
    cin >> y;

    int sum;
    int flag = 0;

    for (int i = 0; i <= n; i++)
    {
        if ((10000 * i) > y)
        {
            break;
        }
        for (int j = 0; j <= (n - i); j++)
        {
            sum = 10000 * i + 5000 * j + 1000 * (n - i - j);
            if (sum > y)
            {
                break;
            }
            else if (sum == y)
            {
                flag = 1;
                cout << i << " " << j << " " << n - i - j << endl;
                break;
            }
        }
        if (flag == 1)
        {
            break;
        }
    }

    if (flag == 0)
    {
        cout << "-1 -1 -1" << endl;
    }

    return 0;
}