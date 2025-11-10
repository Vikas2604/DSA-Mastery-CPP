#include<iostream>
#include<string>
using namespace std;

void ternary(){
  // Practicing ternary operator
  int x, y;
  cout << "Enter the value of x and y: ";
  cin >> x >> y ;
  string result = (x > y) ? "x is greater than y." : "y is greater than x";
  cout << result;
}

int main(){
  ternary();
}