#include <iostream>

using namespace std;

int main() {
    //constant variables cannot be changed later in the code therfore there will be an error if changed  
    const int Mohsen = 10;
    cout << "Mohsen is a " << Mohsen << endl;

    /* Uncomment this to see the error
    Mohsen = 20;
    cout << "Now Mohsen is a " << Mohsen << endl;
    */
   
    return 0;
}