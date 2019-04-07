#include <iostream>
using namespace std;

//use bitwise or
int main()
{
    int N, a;
    int b = 0;

    cin >> N;
    for (int i = 0; i < N; ++i)
    {
        cin >> a;
        b |= a;
    }

    int count = 0;
    while (b % 2 == 0)
    {
        b /= 2;
        ++count;
    }

    cout << count << endl;

    return 0;
}