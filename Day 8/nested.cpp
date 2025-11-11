#include<iostream>
using namespace  std;

void mainDoor(){
  // If the door code is 1995 it is correct otherwise it is wrong.
  int code;
  cout << "Enter the Door Code: ";
  cin >> code;

  if(code == 1995){
    cout << "Correct Code.\nThe door is now open. ";
  }else {
    cout << "Incorrect Code.\nThe door remains closed.";
  }
}

int main(){
  mainDoor();
}