#include <iostream>
using namespace std;

//can run  1<=A,B<=STRING_MAX

int main()
{
    string A, B;

    cin >> A >> B;

    int a = *(A.end() - 1) - '0';
    int b = *(B.end() - 1) - '0';
    cout << (a & b & 1 ? "Odd" : "Even") << endl;

    return 0;
}