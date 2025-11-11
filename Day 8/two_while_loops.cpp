#include<iostream>
using namespace std;

void twoLoops(){
  // Print numbers from 0 to 10 and 10 to 0
  int i = 0;
  while(i <= 10){
    cout << i << "\n";
    i++;
  }
  i = 10;
  while (i >= 0){
    cout << i << "\n";
    i--;
  }
  
}

int main(){
  twoLoops();
}