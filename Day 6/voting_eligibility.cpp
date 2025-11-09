#include <iostream>
using namespace std;

void vote(){
  // Check if the individual is eligible to vote or not
  int myAge;
  cout << "Enter your age: ";
  cin >> myAge;
  if(myAge >= 18){
    cout << "You are eligible to vote!";
  }else{
    cout << "You are not eligible to vote....";
  }
}
int main(){
  vote();
}