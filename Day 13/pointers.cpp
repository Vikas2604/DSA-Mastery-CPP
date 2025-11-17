#include<iostream>
#include<string>
using namespace std;

void pointerCase(){
  string food = "Pizza";
  string* ptr = &food;
  cout << food << "\n";
  cout << &food << "\n";
  cout << ptr << "\n";
  cout << *ptr << endl;
  cout << sizeof(food);
}

int main(){
  pointerCase();
  return 0;
}