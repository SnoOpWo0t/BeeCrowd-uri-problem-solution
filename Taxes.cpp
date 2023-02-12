#include <bits/stdc++.h>
using namespace std;

int main()
{
     double n;
     cin >> n;
     if (n <= 2000.00)
     {
          cout << "Isento\n";
     }
     else if (n >= 2000.01 && n <= 3000.00)
     {
          printf("R$ %.2f\n", (n - 2000.00) * 0.08);
     }
     else if (n >= 3000.01 && n <= 4500.00)
     {
          printf("R$ %.2f\n", ((n - 3000.00) * 0.18 + 1000.00 * 0.08));
     }
     else if (n >= 4500.01)
     {
          printf("R$ %.2f\n", ((n - 4500.00) * 0.28 + 1500.00 * 0.18 + 1000.00 * 0.08));
     }
     return 0;
}