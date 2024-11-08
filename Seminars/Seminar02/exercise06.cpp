#include <iostream>
using namespace std;

int main() {
    int light;
    cout << "Enter the traffic light state (1 for Red, 2 for Yellow, 3 for Green): ";
    cin >> light;
    
    switch (light) {
        case 1:
            cout << "Red light: Stop!" << endl;
            break;
        case 2:
            cout << "Yellow light: Prepare to stop!" << endl;
            break;
        case 3:
            cout << "Green light: Go!" << endl;
            break;
        default:
            cout << "Invalid light state!" << endl;
    }
    
    return 0;
}
