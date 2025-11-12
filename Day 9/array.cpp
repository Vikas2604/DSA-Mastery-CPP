#include<iostream>
#include<string>
using namespace std;

void arrayEle(){
  string cars[5] = {"Volvo", "BMW", "Audi", "Ford", "Toyota"};
  //Accessing the elements of a array.
  cout << cars[2] << "\n";
  // Changing an array element
  cars[2] = "Mazda";
  cout << cars[2] << "\n";
}

void loopArray(){
  // Loop through array
  string cars[5] = {"Volvo", "BMW", "Audi", "Ford", "Toyota"};
  for(int i = 0; i < 5; i++){
    cout << cars[i] << "\n";
  }
  // Loop through array with the index of each element
  for (int i = 0; i < 5; i++) {
    cout << i << " = " << cars[i] << "\n";
  }
}

void forEachLoop(){
  // For-each Loop to print elements of an array
  string cars[5] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"};
  for(string i : cars){
    cout << i << "\n";
  }
}

void omitArraySize(){
  // Omit Array Size ex cars[] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"}
  string cars[] ={"Volvo", "BMW", "Ford", "Mazda", "Tesla"};
  // Range-based for loop to print each element
  for(string i : cars){
    cout << i << "\n";
  }
}

int main(){
  // arrayEle();
  // loopArray();
  // forEachLoop();
  omitArraySize();
  return 0;
}