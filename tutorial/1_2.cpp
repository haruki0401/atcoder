#include <iostream>
using namespace std;

//can run 1<=a,b<=INT_MAX

int main()
{
    int a, b;

    cin >> a >> b;

    cout << ((a & b & 1) ? "Odd" : "Even") << endl;

    /*if (a % 2 == 1 && b % 2 == 1)
    {
        cout << "Odd" << endl;
    }
    else
    {
        cout << "Even" << endl;
    }*/

    return 0;
}