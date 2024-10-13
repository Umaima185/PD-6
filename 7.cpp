#include<iostream>
#include<string>
using namespace std;

string timeStatus(int, int, int, int); 

 main() {  
    int examHour, examMinute, studentHour, studentMinute;
    string status;

    cout << "Enter exam hours: ";
    cin >> examHour;
    cout << "Enter exam minutes: ";
    cin >> examMinute;
    cout << "Enter student hours: ";
    cin >> studentHour;
    cout << "Enter student minutes: ";
    cin >> studentMinute;

    status = timeStatus(examHour, examMinute, studentHour, studentMinute);
    cout << status << endl;

}

string timeStatus(int examHour, int examMinute, int studentHour, int studentMinute) {
    string status;
    int exTotalMinutes = examHour * 60 + examMinute; 
    int stTotalMinutes = studentHour * 60 + studentMinute;
    int diff = stTotalMinutes - exTotalMinutes; 

    if (diff < -30) { 
        status = "Early\n";
        int earlyHours = (-diff) / 60;
        int earlyMinutes = (-diff) % 60;
        status += to_string(earlyHours) + " hours and " + to_string(earlyMinutes) + " minutes before the start.";
    } 
    else if (diff <= 0) {
        status = "On time\n";
        if (diff != 0) {
            status += to_string((-diff)) + " minutes before the start.";
        }
    } 
    else {  
        status = "Late\n";
        int lateHours = diff / 60;
        int lateMinutes = diff % 60;
        if (lateHours > 0) {
            status += to_string(lateHours) + ":" + to_string(lateMinutes) + " minutes after the start.";
        } else {
            status += to_string(lateMinutes) + " minutes after the start.";
        }
    }
    
    return status;
}
