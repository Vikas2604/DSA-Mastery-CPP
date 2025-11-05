#include<iostream>
#include<any>
#include<vector>
using namespace std;

void whichWeekDay(int day){

        switch (day)
    {
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
        cout << "Invalid";
        break;
    }
};

int main(){

    whichWeekDay(3);
    cout << endl;
    std::vector<std::any> arr = {1,true, std::string("hello"), 56};

    cout << any_cast<string>(arr[2]) << endl;
    return 0;

};