#include <iostream>
#include <string>

using namespace std;
 
int main () {
  string FullName, FullNamewithspace, FirstName, LastName;

  
  cout << "What is your firstname? " << endl;
  cin >> FirstName;
  cout << "What is your lastsname? " << endl;
  cin >> LastName;   
  
  FullName = FirstName + LastName;
  FullNamewithspace = FirstName + " " + LastName;
  cout << "Hello " << FullNamewithspace << " This is your name without space: " << FullName << endl;

  return 0;
}