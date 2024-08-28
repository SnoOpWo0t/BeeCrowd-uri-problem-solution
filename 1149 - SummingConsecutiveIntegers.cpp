#include <iostream>
#include <vector>
using namespace std;

int main() {
    int A, N, sum = 0;
    vector<int> values;

    // Read all the input values into a vector
    int input;
    while (cin >> input) {
        values.push_back(input);
    }

    // Assign A as the first element
    A = values[0];

    // Find the first positive N
    for (size_t i = 1; i < values.size(); i++) {
        if (values[i] > 0) {
            N = values[i];
            break;
        }
    }

    // Calculate the sum of N numbers starting from A
    for (int i = 0; i < N; i++) {
        sum += (A + i);
    }

    // Print the result
    cout << sum << endl;

    return 0;
}
