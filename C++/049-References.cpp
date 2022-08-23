#include <iostream>
#include <string>

using namespace std;

int main() {
  string Name = "Mohsen";
  string &TheMan = Name;

  cout << Name << endl;
  cout << TheMan << endl;
  
  return 0;
}
