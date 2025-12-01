#include <iostream>
#include <string>
using namespace std;

void pointer()
{
  string food = "Pizza";
  string *ptr = &food;

  cout << food << "\n";
  cout << ptr << "\n";   // ptr is a pointer variable, its storing the address of food.
  cout << &food << "\n"; // This and ptr will have the same output. The output keeps changing, but both ptr and &food will have the same output

  // if we use the * operator on the pointer variable, it will print the initial value that was assigned to food
  cout << *ptr << "\n"; // Dereference
}

int main()
{
  pointer();
  return 0;
}
//
// Commit on 29th Nov 2025
// Commit on 30th Nov 2025
// Commit on 1st Dec 2025