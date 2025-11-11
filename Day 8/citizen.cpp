#include<iostream>
using namespace std;

void citizen(){
  // Check is the individual is above 18 and if they are check if they are a citizen on this country.
  int age;
  bool isCitizen = true;

  cout << "Enter your Age: ";
  cin >> age;

  if(age >= 18){
    cout << "You are above 18, lets check if you are a citizen of this country.\n";
    if(isCitizen == true){
      cout << "Congratulation you are a citizen! You can vote.";
    }else{
      cout << "Unfortunately you are not a citizen, you cannot vote.";
    }
  }else{
    cout << "You are below 18, so we dont need to check if you are a citizen or not.";
  }
}

int main(){
  citizen();
}