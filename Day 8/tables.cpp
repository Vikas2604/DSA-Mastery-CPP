#include<iostream>
using namespace std;

void tables(){
  int myNum;
  cout << "Enter a number: ";
  cin >> myNum;
  int myTables;
  cout << "\n" << myNum << " Tables " << endl ;
    for(int j = 1 ; j <= 10; j++){
      myTables = (myNum * j);
      cout <<myNum << " x " << j << " = "<< myTables << "\n";
    }

}

int main(){
  tables();
  return 0;
}