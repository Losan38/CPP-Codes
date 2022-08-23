#include <iostream>

using namespace std;

int main() {
    int result1, result2, result3, result4;
    float a, b, result5, result6;

    cout << "Please enter the first number " << endl;
    cin >> a;
    cout << "Please enter the second number " << endl;
    cin >> b;

    result1 = a + b;
    result2 = a - b;
    result3 = b - a;
    result4 = a * b;
    result5 = a / b;
    result6 = b / a;

    cout << "The result of a + b is: " << result1 << endl;
    cout << "The result of a - b is: " << result2 << endl;
    cout << "The result of b - a is: " << result3 << endl;
    cout << "The result of a * b is: " << result4 << endl;
    cout << "The result of a / b is: " << result5 << endl;
    cout << "The result of b / a is: " << result6 << endl;

    return 0;
}