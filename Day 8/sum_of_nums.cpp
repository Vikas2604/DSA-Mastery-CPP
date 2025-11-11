#include<iostream>
using namespace std;

void sumOfNums(){
  // Find the Sum of the all the numbers between myNum and 0.
  int myNum;
  int sum = 0;
  cout << "Enter a number: ";
  cin >> myNum;
  int i = myNum;
  for(i; i >= 0; i--){
    sum += i;
  }
  cout << "Sum of all the numbers till 0 is: " << sum;
}

int main(){
  sumOfNums();
  return 0;
}