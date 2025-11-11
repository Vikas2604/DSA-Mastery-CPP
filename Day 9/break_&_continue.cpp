#include<iostream>
using namespace std;

int main(){
  // break statement
  for(int i = 0; i < 10; i++){
    if(i == 4){
      //As soon as i = 4 condition is met the loop will enter if statement and then break out, stopping anymore iterations from occuring
      break;
    }
    cout << i << "\n";
  }

  // continue statement
  for(int j = 0; j < 10; j++){
    if(j == 4){
      continue;
    }
    cout << j << "\n";
  }
}