#include <iostream>
#include <string>

using namespace std;
 
int main () {
  int myNum = 5;               
  float myFloatNum = 5.99;     
  double myDoubleNum = 9.98;   
  char myLetter = 'M';         
  bool myBoolean = true;       
  string myString = "Mohsen";   
   
  cout << "int is an integer or a whole number: " << myNum << endl;
  cout << "float is numbers with decimals: " << myFloatNum << endl;
  cout << "double is numbers with decimals more accurate than float: " << myDoubleNum << endl;
  cout << "char is a Charachter: " << myLetter << endl;
  cout << "bool is yes or no (1 or 0): " << myBoolean << endl;
  cout << "string can be more than one charechter or variable: " << myString << endl;
 
  return 0;
}