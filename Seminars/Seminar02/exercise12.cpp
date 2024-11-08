#include <iostream>
using namespace std;

int main() {
    int day, month;
    cout << "Enter day and month: ";
    cin >> day >> month;
    
    if (month == 2 && day == 28) {
        cout << "Next date: 1 3" << endl;
    } else if ((month == 4 || month == 6 || month == 9 || month == 11) && day == 30) {
        cout << "Next date: " << 1 << " " << month + 1 << endl;
    } else if (day == 31) {
        if (month == 12) {
            cout << "Next date: 1 1" << endl;
        } else {
            cout << "Next date: " << 1 << " " << month + 1 << endl;
        }
    } else {
        cout << "Next date: " << day + 1 << " " << month << endl;
    }
    
    return 0;
}
