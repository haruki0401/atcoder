#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;

    int n[num];
    for (int i = 0; i < num; i++)
    {
        cin >> n[i];
    }

    int handler = 0;
    int count = -1;

    while (handler == 0)
    {
        count++;

        for (int i = 0; i < num; i++)
        {
            if ((n[i] % 2) == 0)
            {
                n[i] = n[i] / 2;
            }
            else
            {
                handler = 1;
                break;
            }
        }
    }

    cout << count << endl;

    return 0;
}