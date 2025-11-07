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

// Function to perform all the logical operations
void logical(int e, int f){
  cout << (e > 10 && f > 5) << "\n";  // Logical AND Operator compares the statement and give true(1) or false(0) if both are true only then the answer will be true(1) else it will be false(0)
  cout << (e > 50 || f > 10) << "\n"; // Logical OR Operator compares the statement and gives true(1) or false(0) if even one of the equation is true the entire equation will be true
  cout << !(e > f) << "\n"; // Logical NOT Operator convert's 0 to 1 and 1 to 0 basically if its true it becomes false and wise-wersa
}

// Function to perform precedence
void precedence(int g, int h){

  int result1 = g + 5 * h;  // Without and parentheses which means multiplication will be performed first
  int result2 = (g + 5) * h;  // With parentheses which means anything within the parentheses will be performed first
  cout << result1 << endl;
  cout << result2 << endl;

}

int main(){

  // arithemetic(10,2);
  // assignment();
  // comparison(5,10);
  // logical(5,10);
  precedence(10, 10);

}