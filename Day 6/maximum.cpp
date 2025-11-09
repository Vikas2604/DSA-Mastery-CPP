#include<iostream>
using namespace std;

void maximumNum(){
  // Find the maximum and minmum number between the three given numbers
  int a, b, c;
  cout << "Enter the value of A, B, C: ";
  cin >> a >> b >> c;
  if(a >= b && a >= c){
    cout << "A is the greatest.";
  }else if(b >= a && b>= c){
    cout << "B is the greatest.";
  }else {
    cout << "C is the greatest.";
  }
}

int main(){
  maximumNum();
}