#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    int a[100];

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }

    sort(a, a + N, greater<int>());

    int sumx = 0;
    int sumy = 0;

    int i = 0;
    while (i < N)
    {
        if (i % 2 == 0)
        {
            sumx += a[i];
        }
        else
        {
            sumy += a[i];
        }

        i++;
    }

    cout << sumx - sumy << endl;

    return 0;
}