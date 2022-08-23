#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int Number;

  cout << "Please give me a number to compare with 5" << endl;
  cin >> Number;

  if (Number > 5){
    //if true excute
    cout << Number << " is Greater than 5" << endl;
  }
  if (Number < 5){
    //if true excute
    cout << Number << " is Less than 5" << endl;
  }
  if (Number == 5){
    //if true excute
    cout << Number << " is Equal to 5" << endl;
  }
  if (Number != 5){
    //if true excute
    cout << Number << " is not Equal to 5" << endl;
  }
  if (Number <= 5){
    //if true excute
    cout << Number << " is Less or Equal to 5" << endl;
  }
  if (Number >= 5){
    //if true excute
    cout << Number << " is Greater or Equal to 5" << endl;
  }

  return 0;
}
