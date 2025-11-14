#include<iostream>
using namespace std;

enum class Volume {
  LOW,
  MEDIUM,
  HIGH,
  HIGHER
};


int main(){
  Volume v = Volume::HIGHER;
  cout<< static_cast<int>(v);
  return 0;
}