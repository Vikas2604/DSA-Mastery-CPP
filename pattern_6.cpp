/*
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1
*/
#include<iostream>
using namespace std;

void pattern6(){
  for(int i = 6; i <= 6; i--){
    for(int j = 0; j < i; j++){
      cout << j << " ";
    }
    cout << "\n";
  }
}

int main(){
  pattern6();
  return 0;
}