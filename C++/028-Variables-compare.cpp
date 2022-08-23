#include <iostream>

using namespace std;
 
int main () {
  int a, b;
  cout << "Whats the first number? " << endl;  
  cin >> a;
  cout << "Whats the second number? " << endl;
  cin >> b;
  
  int GreatestValue = max(a, b);
  int LowestValue = min(a, b);
  
  cout << "The Greatest Value is: " << GreatestValue << endl;
  cout << "The Lowest Value is: " << LowestValue << endl;

  return 0;
}