#include <iostream>

using namespace std;

int main() {
  int loop_count, i = 0;
  cout << "How many times should the loop be excuted ? ";
  cin >> loop_count;


  do {
    cout << i << endl;
    i++; // i = i + 1
  }
  while (i < loop_count);
  
  return 0;
}
