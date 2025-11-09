#include<iostream>
using namespace std;

void npc(){
  // Check if the entered number is positive, negative or zero
  int myNum;
  cout << "Enter the number: ";
  cin >> myNum;
  if(myNum >= 1){
    cout << "It is a Positive Number.";
  }else if(myNum <= -1){
    cout << "It is a Negative Number.";
  }else{
    cout << "The entered Number is Zero or Invalid.";
  }
}

int main(){
  npc();
}