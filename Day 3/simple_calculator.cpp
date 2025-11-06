#include<iostream>
using namespace std;

void calculator(){

  int x, y, sum;

  cout << "Enter the value of x & y: " << endl;
  cin >> x;
  cin >> y;

  sum = x + y;

  cout << "Sum of x + y = "<<sum ;


}

int main(){
  calculator();
}