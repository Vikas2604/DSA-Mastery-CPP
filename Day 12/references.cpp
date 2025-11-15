#include<iostream>
#include<string>
using namespace std;

void reffering(){
  string food = "Pizza";
  string &meal = food;

  cout << food << "\n";
  cout << meal << "\n";

  meal = "Burger";

  cout << food << "\n";
  cout << meal << endl;
}

void memoryAddress(){
  string food = "Pizza";
  cout << &food << endl;
}

int main(){
  // reffering();
  memoryAddress();xx 
  return 0;
}