#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;

    cout << "Minimum: " << (a < b ? a : b) << endl;
    cout << "Maximum: " << (a > b ? a : b) << endl;
    return 0;
}
