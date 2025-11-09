#include <iostream>
using namespace std;

void marks(){
  // To get grade of a student depending on their marks
  int myMarks;
  cout << "Enter your Marks: ";
  cin >> myMarks;
  if(myMarks >= 90){
    cout << "Grade A";
  }else if(myMarks >= 70){
    cout << "Grade B";
  }else if(myMarks >= 50){
    cout << "Grade C";
  }else if(myMarks >= 31){
    cout << "Grade D";
  }else if(myMarks <= 30){
    cout << "Fail";
  }
}

int main(){
  marks();
}