#include <iostream>

using namespace std;

int main() {
    int a = 5;
    int b = 10;

    int result1;
    int result2;
    
    result1 = a - b;
    result2 = b - a;

    cout << "The result of a - b is: " << result1 << endl;
    cout << "The result of b - a is: " << result2 << endl;

    return 0;
}