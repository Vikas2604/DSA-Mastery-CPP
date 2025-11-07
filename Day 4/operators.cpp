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

// Function to perform all the assignment operations
void assignment(){
  int a;
  a = 10;
  cout << a << "\n";
  a += 3; // a = a + 3
  cout << a << "\n";
  a -= 3; // a = a - 3
  cout << a << "\n";
  a *= 3; // a = a * 3
  cout << a << "\n";
  a /= 3; // a = a / 3
  cout << a << "\n";
  a %= 3; // a = a % 3
  cout << a << "\n";
  a &= 3; // a = a & 3
  cout << a << "\n";
  a |= 3; // a = a | 3
  cout << a << "\n";
  a ^= 3; // a = a ^ 3
  cout << a << "\n";
  a >>= 3; // a = a >> 3
  cout << a << "\n";
  a <<= 3; // a = a << 3
  cout << a << "\n";
}

int main(){

  // arithemetic(10,2);
  assignment();

}