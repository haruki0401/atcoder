#include <iostream>
#include <algorithm>
using namespace std;

string divide[4] = {"dream", "dreamer", "erase", "eraser"};

int main()
{
    string S;
    cin >> S;

    reverse(S.begin(), S.end());

    int num = sizeof(divide) / sizeof(divide[0]);

    for (int i = 0; i < num; i++)
    {
        reverse(divide[i].begin(), divide[i].end());
    }

    bool can = true;
    for (int i = 0; i < S.size();)
    {
        bool sub_can = false;
        for (int j = 0; j < num; j++)
        {
            if (S.substr(i, divide[j].size()) == divide[j])
            {
                sub_can = true;
                i += divide[j].size();
                break;
            }
        }

        if (!sub_can)
        {
            can = false;
            break;
        }
    }

    if (can)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}