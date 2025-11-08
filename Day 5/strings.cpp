#include<iostream>
#include<string>
using namespace std;

void learningStrings(){
  // When creating a string type variable we must use the keyword "string"
  string greeting = "Hello and Welcome!";
  cout << greeting <<"\n";

  string firstName = "James ";
  string lastName = "Bond";
  string fullName = firstName + lastName;
  cout << fullName << "\n";
  string fullName1 = firstName.append(lastName);
  cout << fullName1 << "\n";

  // String Functions
  string a = "Hello ";
  string b = "World!";
  cout << a.append(b) << "\n";
  cout << a.at(1) << "\n";
  cout << a.back() << "\n";
  cout << *a.begin() << "\n";
  cout << a.c_str() << "\n";
  // a.clear(); // Used to clear a string, vector etc. Return is void hence cout doesnt work.
  cout << a.compare(b) << "\n";
  // cout << a.copy() << "\n";

  // Concatination of string using + operator
  string c = "10";
  int d = 20;
  cout << c + d << "\n";
  // cout << "c" + "d" << "\n";

}

int main(){

  learningStrings();
}