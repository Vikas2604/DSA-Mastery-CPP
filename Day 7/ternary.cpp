#include<iostream>
#include<string>
using namespace std;

void ternary(){
  // Using ternary operator to find if the number is odd or even
  int myNum;
  cout << "Enter a number: ";
  cin >> myNum;
  string result = (myNum % 2 == 1) ? "It is a odd number." : "It is a even number.";
  cout << result ;
}

int main(){
  ternary();
}