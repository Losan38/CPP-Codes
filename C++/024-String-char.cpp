#include <iostream>
#include <string>

using namespace std;
 
int main () {
  string word;

  cout << "Give me a word: " << endl;
  cin >> word;

  int wordlength = word.length();

  cout << "The word is: " << word << endl;
  cout << "The words length is: " << wordlength << endl;

  cout << "The first charecter of the word is: " << word[0] << endl;
  cout << "The first charecter of the word is: " << word[wordlength-1] << endl;

  return 0;
}