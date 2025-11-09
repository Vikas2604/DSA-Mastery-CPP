#include <iostream>
using namespace std;

void checkingCase(){
// Check if the entered case is upper or lower and if its anything else print invalid/not a alphabet
char myLetter;
cout << "Enter the letter:";
cin >> myLetter;
if(myLetter >= 'A' && myLetter <='Z'){
  cout << "It is a Upper Case Letter.";
}else if(myLetter >='a' && myLetter <='z'){
  cout << "It is a Lower Case Letter.";
}else{
  cout << "The entered digit isnt a alphabet.";
}

}

int main(){
  checkingCase();
}