#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Enter two different numbers: ";
    cin >> num1 >> num2;
    
    cout << "The larger number is: " << (num1 > num2 ? num1 : num2) << endl;
    
    return 0;
}
