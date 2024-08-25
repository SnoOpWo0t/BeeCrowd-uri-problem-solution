#include <iostream>
using namespace std;

int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}
int main() {
    int a;
    cin >> a;
    
    int b = factorial(a);
    cout << b << endl;

    return 0;
}
