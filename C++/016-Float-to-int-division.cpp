#include <iostream>

using namespace std;

int main() {
    float x = 25;
    float y = 4;

    float result1;
    float result2;

    result1 = x / y;
    result2 = y / x;

    int intresult1 = int(result1);
    int intresult2 = int(result2);
    

    cout << "The result of x / y is: " << result1 << " The absolute Value is: " << intresult1 << endl;
    cout << "The result of y / x is: " << result2 << " The absolute Value is: " << intresult2 << endl;

    return 0;
}