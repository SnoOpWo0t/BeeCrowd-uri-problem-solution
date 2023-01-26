#include <bits/stdc++.h>
using namespace std;
int main()
{
     double A, B, C, sum, ar, per;
     cin >> A >> B >> C;
     sum = A + B + C;
     if (A + B > C && C+ A > B && B + C > A)
     {

          cout << fixed << setprecision(1) << "Perimetro = " << sum << endl;
     }
     else
     {
          ar = ((A + B)* C/2);
          cout << fixed << setprecision(1) << "Area = " << ar << endl;
     }
     return 0;
}