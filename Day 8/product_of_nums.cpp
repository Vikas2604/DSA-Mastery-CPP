#include<iostream>
using namespace std;

void productOfNum(){
  // Program that calculates the product of numbers from 1 to 5 using a while loop
  int myNum;
  int prod = 1;

  cout << "Enter a number: ";
  cin >> myNum;

  int i = myNum;
  
  while(i >= 1){
    prod *= i;
    i--;
  }

  cout << "Product of Numbers till 1 is: " << prod << endl;

}

int main(){
  productOfNum();
  return 0;
}