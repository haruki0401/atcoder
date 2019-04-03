#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    int d[100];

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> d[i];
    }

    sort(d, d + N, greater<int>());

    int count = 0;
    int temp = -1;

    for (int i = 0; i < N; i++)
    {
        if (temp != d[i])
        {
            count++;
            temp = d[i];
        }
    }

    cout << count << endl;

    return 0;
}