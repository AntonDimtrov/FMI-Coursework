#include <iostream>
using namespace std;

bool isCoprime(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a == 1;
}

int main() {
    int N;
    cin >> N;
    
    int sum = 0;
    int num;
    while (cin >> num && num != -1) {
        if (isCoprime(N, num)) {
            sum += num;
        }
    }

    cout << sum << endl;
    return 0;
}
