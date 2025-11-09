#include <iostream>
using namespace std;

void boolean(){
  // Using boolean values
  bool isCodingFun = true;
  bool isLifeFun = false;

  cout << isCodingFun << "\n";
  cout << isLifeFun << "\n";

  // Using boolalpha to get true or false instead of 1 or 0
  cout << boolalpha;
  cout << isCodingFun << "\n";
  cout << isLifeFun << "\n";

  // Using noboolalpha to return to default 1 or 0
  cout << noboolalpha;
  cout << isCodingFun << "\n";
  cout << isLifeFun << "\n";

}


int main(){
  boolean();
}