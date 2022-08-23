#include <iostream>

using namespace std;
 
int main () {
  int a = 10, b = 5;
  
  int GreatestValue = max(a, b);
  int LowestValue = min(a, b);
  
  cout << "The Greatest Value is: " << GreatestValue << endl;
  cout << "The Lowest Value is: " << LowestValue << endl;

  return 0;
}