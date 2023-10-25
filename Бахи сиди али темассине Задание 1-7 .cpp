#include <iostream>
using namespace std;

int main() {
    int hours;
    int minute ;
    int second;
    cout << "Enter the hours : ";
    cin >> hours;
    cout << "Enter the minute : ";
    cin >> minute;
    cout << "Enter the second : ";
    cin >> second;
    // Calculate the full hours that have passed
    int full_hours = hours* 3600;

    // Calculate the remaining seconds after subtracting the full hours
    int remaining_minute= minute * 60;

    // Calculate the full minutes that have passed
    int full_nnowTime = full_hours+remaining_minute +  second ;
    full_nnowTime -1;

    cout << "Full hours passed: " << full_hours << endl;

  ;  return 0;
}