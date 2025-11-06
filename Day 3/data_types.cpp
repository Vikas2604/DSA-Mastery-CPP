#include<iostream>
#include<string> // We are using this because we will be using string data type
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

  char b = 'B';
  cout << b << endl;
  char c = 67; // We are using ASCII Value here 67 = C
  cout << c << endl;

  string name = "Vikas";
  cout << name << endl;
  
  // auto d; This is not allowed because when we use the auto key word we have to initialize it as well.
  auto e = 10;
  cout << e << endl;

}

int main(){
  types();
}