#include<iostream>
using namespace std;

void loop(){
  // For-each Loop
  int arr[5] = {10, 20, 30, 40, 50};
  for(int num : arr){
    cout << num << "\n";
  }
}

int main(){
  loop();
  return 0;
}