#include <iostream>
using namespace std;

void printDivisors(int n) {
    for (int i = 1; i <= n; ++i) {
        if (n % i == 0) {
            cout << i << endl;
        }
    }
}

int main() {
    int number;
    cin>>number;
    printDivisors(number);
    return 0;
}
