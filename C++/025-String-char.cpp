#include <iostream>
#include <string>

using namespace std;
 
int main () {
  string Word;
  char FirstChar, LastChar;

  cout << "Give me a something: " << endl;
  cin >> Word;

  int WordLength = Word.length();
  FirstChar = Word[0];
  LastChar = Word[WordLength-1];

  cout << "The input is: " << Word << endl;
  cout << "The input length is: " << WordLength << endl;

  cout << "The first charecter of the input is: " << FirstChar << endl;
  cout << "The Last charecter of the input is: " << LastChar << endl;

  return 0;
}