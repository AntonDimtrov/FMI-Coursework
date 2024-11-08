#include <iostream>
using namespace std;

bool isTriangle(int a, int b, int c) {
    return (a + b > c && a + c > b && b + c > a);
}

int main() {
    int a, b, c;
    cout << "Enter three sides of a triangle: ";
    cin >> a >> b >> c;
    
    if (isTriangle(a, b, c)) {
        cout << "It is a valid triangle." << endl;
    } else {
        cout << "It is not a valid triangle." << endl;
    }
    
    return 0;
}
