#include <iostream>
#include <cmath>

using namespace std;

int main() {
  bool Variable = true;

  cout << " Variable is now " << Variable << endl;

  Variable = false;

  cout << " Variable is now " << Variable << endl;

  Variable = !Variable;

  cout << " Variable is now " << Variable << endl;

  Variable = (10 < 0);

  cout << " Variable is now " << Variable << endl;

  Variable = (10 > 0);

  cout << " Variable is now " << Variable << endl;

  Variable = (10 == 10);

  cout << " Variable is now " << Variable << endl;

  Variable = (10 == 0);

  cout << " Variable is now " << Variable << endl;

  Variable = (10 != 0);

  cout << " Variable is now " << Variable << endl;

  Variable = (10 != 10);

  cout << " Variable is now " << Variable << endl;

  return 0;
}
