#include <bits/stdc++.h>
using namespace std;
int main()
{
     int x, i, p = 0, o = 0, e = 0, ne = 0;
     for (i = 1; i <= 5; i++)
     {
          cin >> x;
          if (x % 2 == 0)
          {
               e++;
          }
          if (x % 2 != 0)
          {
               o++;
          }
          if (x > 0)
          {
               p++;
          }
          if (x < 0)
          {
               ne++;
          }
     }
     cout << e << " valor(es) par(es)" << endl;
     cout << o << " valor(es) impar(es)" << endl;
     cout << p << " valor(es) positivo(s)" << endl;
     cout << ne << " valor(es) negativo(s)" << endl;
     return 0;
}