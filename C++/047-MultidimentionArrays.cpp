#include <iostream>
using namespace std;

int main() {
  string square[5][5] = {
    { "A1", "A2", "A3", "A4", "A5"},
    { "B1", "B2", "B3", "B4", "B5"},
    { "C1", "C2", "C3", "C4", "C5"},
    { "D1", "D2", "D3", "D4", "D5"},
    { "E1", "E2", "E3", "E4", "E5"}
  };
  
  cout << square[0][0] << endl;
  cout << square[1][1] << endl;
  cout << square[2][2] << endl;
  cout << square[3][3] << endl;
  cout << square[4][4] << endl;

  return 0;
}
