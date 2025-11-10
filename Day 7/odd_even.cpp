#include<iostream>
using namespace std;

void oddEven(){
  // To check if the entered number is odd or even
  int myNum;
  cout << "Enter a Number: ";
  cin >> myNum;
  if(myNum % 2 == 1){
    cout << "It is a odd number. ";
  }else{
    cout << "It is a even number.";
  }
}

int main(){
  oddEven();
}