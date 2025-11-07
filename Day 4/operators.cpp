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

// Function to perform all the comparison operators
void comparison(int c, int d){
  cout << (c == d) << "\n"; // Equal to operator
  cout << (c != d) << "\n"; // Not equal to operator 
  cout << (c > d) << "\n";  // Greater than operator
  cout << (c < d) << "\n";  // Lesser than operator
  cout << (c >= d) << "\n"; // Greater than or equal to operator
  cout << (c <= d) << "\n"; // Lesser than or equal to operator

} 

int main(){

  // arithemetic(10,2);
  // assignment();
  comparison(5,10);

}