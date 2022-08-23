#include <iostream>

using namespace std;

int main() {

  for (int i = 2; i < 20; i = i + 2) {
    cout << i << endl;
    if (i == 10){
      cout << "i is now 10 Breaking out of the Loop" << endl;
      break; // the opposite of break is continue
    }
    else{
      continue;
    }
  }
  
  return 0;
}
