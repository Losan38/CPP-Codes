#include <iostream>

using namespace std;

int main() {
    float a = 5, b = 12;
    int result1, result2, result3, result4;
    float result5, result6;

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