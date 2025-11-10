#include<iostream>
#include<string>
using namespace std;

// void nested(){
//   // Using nested if statement to check if x is greater than 10 if it is check if y is greater than 20
//   int x, y;
//   cout << "Enter the value of x & y: ";
//   cin >> x >> y;
//   if(x > 10){
//     cout << "x is greater than 10." << "\n";
//     if(y > 20){
//       cout << "y is greater than 20.";
//     }else{
//       cout << "y is not greater than 20.";
//     }
//   }else {
//     cout << "x is not greater than 10, hence no need to check for y.";
//   }
// }

void nestedTernary(){
  // Performing nested function using ternary operators
  int a, b;
  cout << "Enter the value of A & B: ";
  cin >> a >> b;
  string result = (a > 10) ? ((b > 20)? "Both conditions are true A > 10 and B > 20. " : "A > 10 but B < 20."):"A < 10, so we dont need to check B.";
  cout << result;
}

int main(){
  // nested();
  nestedTernary();
  return 0;
}