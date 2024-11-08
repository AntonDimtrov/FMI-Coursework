#include <iostream>
using namespace std;

int sum_digits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int N;
    cin >> N;
    while (N >= 10) {
        N = sum_digits(N);
    }
    cout << N << endl;
    return 0;
}
