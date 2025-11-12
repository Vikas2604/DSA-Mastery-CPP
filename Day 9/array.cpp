#include<iostream>
#include<string>
using namespace std;

void arrayEle(){
  string cars[5] = {"Volvo", "BMW", "Audi", "Ford", "Toyota"};
  //Accessing the elements of a array.
  cout << cars[2] << "\n";
  // Changing an array element
  cars[2] = "Mazda";
  cout << cars[2] << "\n";
}

void loopArray(){
  // Loop through array
  string cars[5] = {"Volvo", "BMW", "Audi", "Ford", "Toyota"};
}

int main(){
  arrayEle();
  return 0;
}