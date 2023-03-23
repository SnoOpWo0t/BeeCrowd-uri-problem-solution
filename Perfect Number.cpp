#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, T;
    cin >> T;
    for (i = 1; i <= T; i++)
    {
        int n, sum = 0;
        cin >> n;
        for (i = 1; i < n; i++)
        {
            if (n % i == 0)
            {
                sum += i;
            }
        }
        if (sum == n)
        {
            cout << n << " eh perfeito" << endl;
        }
        else
        {
            cout << n << " nao eh perfeito" << endl;
        }
    }
    return 0;
}