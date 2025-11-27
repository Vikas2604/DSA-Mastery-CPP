#include<iostream>
#include<string>
using namespace std;

void ref(){
  string food = "Pizza";
  string &meal = food;

  cout << &food << "\n";
  cout << food << "\n";
  cout << meal << "\n";
  cout << &meal << endl;
}

int main(){
  ref();
  return 0;
}