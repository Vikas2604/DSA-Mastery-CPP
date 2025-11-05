#include<iostream>
#include<any>
#include<vector>
using namespace std;

void myFunction(){

  std::vector<std::any> anything = {1,std::string("Hello"), 58, true};
  cout << std::any_cast<std::string>(anything[1]) << endl;

  cout << std::any_cast<int>(anything[0]) << endl;

}


int main(){

  myFunction();

};