#include <iostream>
#include <string>

using namespace std;

int main() {
  string Names[4] = {"Mohsen", "Ali", "Saji", "Maria"};

  cout << Names << endl; //It shows a address 
  cout << Names[0] << endl; //It shows the first block
  cout << Names[1] << endl; //It shows the second block
  cout << Names[2] << endl; //It shows the third block
  cout << Names[3] << endl; //It shows the fourth block
  cout << " " << endl;
  
  int Names_length = sizeof(Names)/sizeof(Names[0]);
  cout << Names_length << endl;

  
  return 0;
}
