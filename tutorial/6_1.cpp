#include <iostream>
using namespace std;

int main()
{
    int n, a, b;
    cin >> n >> a >> b;

    int full_some = 0;

    for (int i = 0; i <= n; i++)
    {
        int temp = i;
        int sum = 0;

        while (temp != 0)
        {
            sum += temp % 10;
            temp = temp / 10;
        }

        if (sum >= a && sum <= b)
        {
            full_some += i;
        }
    }

    cout << full_some << endl;

    return 0;
}