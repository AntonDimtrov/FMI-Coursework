#include <iostream>
using namespace std;

int main() {
    int percentage;
    cout << "Enter percentage: ";
    cin >> percentage;
    
    if (percentage >= 90) {
        cout << "Grade: 6+" << endl;
    } else if (percentage >= 80) {
        cout << "Grade: 6" << endl;
    } else if (percentage >= 70) {
        cout << "Grade: 5" << endl;
    } else if (percentage >= 60) {
        cout << "Grade: 4" << endl;
    } else if (percentage >= 40) {
        cout << "Grade: 3" << endl;
    } else {
        cout << "Grade: 2" << endl;
    }
    
    return 0;
}
