/*
* * * * *
* * * *
* * *
* *
*
*/
#include<iostream>
using namespace std;

void pattern5(){
  for(int i = 5; i > 0; i--){
    for(int j = 0; j < i; j++){
      cout << "* ";
    }
    cout << "\n";
  }
}

int main(){
  pattern5();
  return 0;
}