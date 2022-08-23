#include <iostream>

using namespace std;

int main() {
  int day;
  cout << "Give me a day number 1-7: ";
  cin >> day;

  switch (day) {
    case 1:
      cout << "Day " << day <<" is Monday" << endl;
      break; //Break to stop going to the other Cases 
    case 2:
      cout << "Day " << day <<" is Tuesday" << endl;
      break; //Break to stop going to the other Cases 
    case 3:
      cout << "Day " << day <<" is Wednesday" << endl;
      break; //Break to stop going to the other Cases 
    case 4:
      cout << "Day " << day <<" is Thursday" << endl;
      break; //Break to stop going to the other Cases 
    case 5:
      cout << "Day " << day <<" is Friday" << endl;
      break; //Break to stop going to the other Cases 
    case 6:
      cout << "Day " << day <<" is Saturday" << endl;
      break; //Break to stop going to the other Cases 
    case 7:
      cout << "Day " << day <<" is Sunday" << endl;
      break; //Break to stop going to the other Cases 
  }
  return 0;
}
