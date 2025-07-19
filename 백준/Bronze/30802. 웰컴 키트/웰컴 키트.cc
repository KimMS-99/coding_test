#include <iostream>

using namespace std;

int main()
{
    int n;
    long long s, m, l, xl, xxl, xxxl;
    int t, p;
    int t_count = 0;
    cin >> n;
    cin >> s >> m >> l >> xl >> xxl >> xxxl;
    cin >> t >> p;

    long long ary[] = {s, m, l, xl, xxl, xxxl};
    for (int i = 0; i < 6; i++)
        if (ary[i] % t == 0)
            t_count += ary[i] / t;
        else
            t_count += ary[i] / t + 1;

    cout << t_count << endl
         << n / p << " " << n % p << endl;
}