#include <iostream>
using namespace std;

int main()
{
    int X, Y;

    // Read the input values
    cin >> X >> Y;

    // Ensure X is less than Y for ascending order
    if (X > Y)
    {
        int temp = X;
        X = Y;
        Y = temp;
    }

    // Iterate over the range and check the condition
    for (int number = X + 1; number < Y; number++)
    {
        if (number % 5 == 2 || number % 5 == 3)
        {
            cout << number << endl;
        }
    }

    return 0;
}
