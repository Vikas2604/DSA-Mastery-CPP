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
  // calculator();
  cout << "\n";
  double z = 10.92543534234234;
  cout << z << endl;


  float f1 = 35e3;
  cout << f1 << endl;
  
  double d1 = 35E3; // Same as line 26 the answer will be the same
  cout << d1;
}