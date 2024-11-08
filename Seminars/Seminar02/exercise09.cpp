#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    
    if (a > b) {
        swap(a, b);  
    }
    if (b > c) {
        swap(b, c); 
    }
    if (a > b) {
        swap(a, b);  
    
    }
    
    cout << "Sorted numbers: " << a << " " << b << " " << c << endl;
    
    return 0;
}
