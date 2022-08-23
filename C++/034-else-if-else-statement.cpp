#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int Number;

  cout << "Please give me a number to compare with 5" << endl;
  cin >> Number;

  if (Number > 5){
    //if this is true jump excute and exit if not go to next one
    cout << Number << " is Greater than 5" << endl;
  }
  else if (Number < 5){
    //if this is true jump excute and exit if not go to next one
    cout << Number << " is Less than 5" << endl;
  }
  else if (Number == 5){
    //if this is true jump excute and exit if not go to next one
    cout << Number << " is Equal to 5" << endl;
  }
  else if (Number != 5){
    //if this is true jump excute and exit if not go to next one
    cout << Number << " is not Equal to 5" << endl;
  }
  else if (Number <= 5){
    //if this is true jump excute and exit if not go to next one
    cout << Number << " is Less or Equal to 5" << endl;
  }
  else if (Number >= 5){
    //if this is true jump excute and exit if not go to next one
    cout << Number << " is Greater or Equal to 5" << endl;
  }
  else {
    //if None of the above where true excute this
    cout << Number << " is Wierd" << endl;
  }

  return 0;
}
