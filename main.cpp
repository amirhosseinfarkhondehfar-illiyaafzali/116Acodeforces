#include <iostream>

using namespace std;

int main()
{
    int max = 0, now = 0, a;
    cin >> a;
    while (a > 0)
    {
        int b, c;
        cin >> b >> c;
        now -= b;
        now += c;

        if (now > max)
        {
            max = now;
        }

        a--;
    }
    cout << max << endl;
}