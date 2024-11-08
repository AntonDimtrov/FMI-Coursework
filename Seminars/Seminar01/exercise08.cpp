#include <iostream>
#define PI 3.14159265
using namespace std;

int main() {
    double radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    double circumference = 2 * PI * radius;
    double area = PI * radius * radius;

    cout << "Circumference: " << circumference << endl;
    cout << "Area: " << area << endl;
    return 0;
}
