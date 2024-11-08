#include <iostream>
#include <cctype>
using namespace std;

bool isVowel(char ch) {
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    
    if (isalpha(ch)) {
        if (isVowel(ch)) {
            cout << ch << " is a vowel." << endl;
        } else {
            cout << ch << " is a consonant." << endl;
        }
    } else {
        cout << ch << " is not a letter." << endl;
    }
    
    return 0;
}
