#include<iostream>
#include<string>
using namespace std;

void ternary(){
  // Using ternary operator for if else if statement
  int a, b, c;
  cout << "Enter the value of A, B & C: ";
  cin >> a >> b >> c;
  string result = (a > b && a > c) ? "A is the greatest." : (b > a && b > c) ? "B is the greatest." : "C is the greatest.";
  cout << result;
}

int main(){
  ternary();
}