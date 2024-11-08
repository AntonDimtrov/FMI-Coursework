#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0) return 1;
    int result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    int N;
    cin >> N;
    cout << "Factorial: " << factorial(N) << endl;
    return 0;
}
