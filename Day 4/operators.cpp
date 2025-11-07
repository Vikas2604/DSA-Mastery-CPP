#include<iostream>
using namespace std;

// Function to perform all the arithemetic operations
  void arithemetic(int x, int y){
    cout << x + y << "\n";
    cout << x - y << "\n";
    cout << x * y << "\n";
    cout << x / y << "\n";
    cout << x % y << "\n";
    cout << x++ << "\n";
    cout << x-- << "\n";
  }


int main(){

  arithemetic(10,2);

}