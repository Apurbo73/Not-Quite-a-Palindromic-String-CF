#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int count0 = 0, count1 = 0;
        for (char c : s)
        {
            if (c == '0')
                count0++;
            else
                count1++;
        }

        int p = n / 2;
        bool possible = false;

        for (int x = 0; x <= k; x++)
        {
            int zeros_needed = 2 * x + (p - k);
            int ones_needed = 2 * (k - x) + (p - k);

            if (zeros_needed <= count0 && ones_needed <= count1)
            {
                possible = true;
                break;
            }
        }

        cout << (possible ? "YES\n" : "NO\n");
    }

    return 0;
}
