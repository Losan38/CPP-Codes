#include <iostream>

using namespace std;

int main() {
    int x = 5;
    float y = 0.5;

    float result1;
    float result2;

    result1 = x / y;
    result2 = y / x;

    cout << "The result of x / y is: " << result1 << endl;
    cout << "The result of y / x is: " << result2 << endl;

    return 0;
}