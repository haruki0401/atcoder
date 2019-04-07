#include <iostream>
#include <climits>
using namespace std;

//use linear search
int main()
{
    int N;
    int A[200];

    cin >> N;
    for (int i = 0; i < N; ++i)
    {
        cin >> A[i];
    }

    int res = INT_MAX;

    for (int i = 0; i < N; ++i)
    {
        int count = 0;
        while (A[i] % 2 == 0)
        {
            A[i] /= 2;
            ++count;
        }

        if (res > count)
        {
            res = count;
        }
    }

    cout << res << endl;

    return 0;
}