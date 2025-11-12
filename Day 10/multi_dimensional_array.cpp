#include<iostream>
using namespace std;

void loop(){
  // Loop through multi-dimensional array.
  int myNum[3][4]={
    {1, 2, 3, 4},
    {5, 6, 7, 8},
    {9, 10, 11, 12},
  };
  
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 4; j++){
      cout << myNum[i][j] << "\n";
    }
  }

}

int main(){
  loop();
  return 0;
}