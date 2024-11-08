#include <iostream>
using namespace std;

void printRoman(int num) {
    switch (num) {
        case 1: cout << "I"; break;
        case 2: cout << "II"; break;
        case 3: cout << "III"; break;
        case 4: cout << "IV"; break;
        case 5: cout << "V"; break;
        case 6: cout << "VI"; break;
        case 7: cout << "VII"; break;
        case 8: cout << "VIII"; break;
        case 9: cout << "IX"; break;
        default: cout << "Invalid number"; break;
    }
}

int main() {
    int num;
    cout << "Enter a number (1-9): ";
    cin >> num;
    
    cout << "Roman numerals: ";
    printRoman(num);
    cout << endl;
    
    return 0;
}