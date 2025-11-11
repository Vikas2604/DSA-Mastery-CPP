#include<iostream>
using namespace std;

void sumOfPositive(){
  // Sum of all the numbers till zero from the entered number.
  int myNum;
  int sum = 0;
  cout << "Enter a Number: ";
  cin >> myNum;
  
  int i = myNum;

  while(i >= 0){
    sum += i;
    i--;
  }
  cout << "Sum of all the numbers till zero: " << sum << endl;

}

int main(){
  sumOfPositive();
  return 0;
}