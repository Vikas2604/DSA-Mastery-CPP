#include<iostream>
using namespace std;

void day(){
  // To check which day is it depending on the entered number between 1 - 7
  int myDay;
  cout << "Enter a number depending on the day between 1(Monday) - 7(Sunday): ";
  cin >> myDay;
  
  switch(myDay){
    case 1:
      cout << "Monday";
    break;
    case 2:
      cout << "Tuesday";
    break;
    case 3:
      cout << "Wednesday";
    break;
    case 4:
      cout << "Thursday";
    break;
    case 5:
      cout << "Friday";
    break;
    case 6:
      cout << "Saturday";
    break;
    case 7:
      cout << "Sunday";
    break;
    default:
      cout << "Good Week.";
  }
}

int main(){
  day();
}