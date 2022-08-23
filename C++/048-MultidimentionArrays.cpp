#include <iostream>
using namespace std;

int main() {
  int i,j;
  string square[5][5] = {
    { "A1", "A2", "A3", "A4", "A5"},
    { "B1", "B2", "B3", "B4", "B5"},
    { "C1", "C2", "C3", "C4", "C5"},
    { "D1", "D2", "D3", "D4", "D5"},
    { "E1", "E2", "E3", "E4", "E5"}
  };
  
  while (true){
    cout << "Chose 1-5 for i: ";
    cin >> i; 
    cout << endl;
    
    if (i > 5 || i <= 0){
      cout << "You chose wrong breaking! " << endl;
      break;
    }

    cout << "Chose 1-5 for J: ";
    cin >> j;
    cout << endl;
    if (j > 5 || j <= 0){
      cout << "You chose wrong breaking! " << endl;
      break;
    }
    
    cout << square[i-1][j-1] << endl;
  }

  return 0;
}
