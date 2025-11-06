#include<iostream>
using namespace std;

void types(){

  int a = 10;
  cout << a << endl;

  double z = 10.92543534234234;
  cout << z << endl;


  float f1 = 35e3;
  cout << f1 << endl;
  
  double d1 = 35E3; // Same as line 26 the answer will be the same
  cout << d1 << endl;

  bool isCodingFun = true;
  bool foodSucks = false; // Bad naming dont follow it.
  cout << isCodingFun << endl;
  cout << foodSucks << endl;

}

int main(){
  types();
}