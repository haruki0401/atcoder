#include <iostream>
#include <numeric>
using namespace std;

//use C++ function

int main()
{
    string s;
    cin >> s;
    cout << accumulate(s.begin(), s.end(), 0) - 3 * '0' << endl;
    return 0;
}