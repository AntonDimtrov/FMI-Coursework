#include <iostream>
using namespace std;

int main() {
    double leva, usdRate = 0.57, eurRate = 0.51;
    cout << "Enter amount in BGN: ";
    cin >> leva;
    cout << "USD: " << leva * usdRate << endl;
    cout << "EUR: " << leva * eurRate << endl;
    return 0;
}
