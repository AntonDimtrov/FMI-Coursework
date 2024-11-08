#include <iostream>
using namespace std;

int main() {
    double length, width;
    cout << "Please enter the length of the first side: ";
    cin >> length;
    cout << "Please enter the length of the second side: ";
    cin >> width;

    double perimeter = 2 * (length + width);
    double area = length * width;

    cout << "Perimeter: " << perimeter << endl;
    cout << "Area: " << area << endl;
    return 0;
}
