#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a, b, c;
    while (true)
    {
        cin >> a >> b >> c;
        if (a == 0 && b == 0 && c == 0)
            break;

        int ary[3] = {a, b, c};
        sort(ary, ary + 3);

        if (ary[0] * ary[0] + ary[1] * ary[1] == ary[2] * ary[2])
            cout << "right" << endl;
        else
            cout << "wrong" << endl;
    }
}