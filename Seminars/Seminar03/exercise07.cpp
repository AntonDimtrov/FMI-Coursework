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

bool is_prime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int sum = 0;
    for (int i = 100; i < 1000; ++i) {
        int digit_sum = sum_digits(i);
        if (digit_sum >= 10 && is_prime(digit_sum)) {
            sum += i;
        }
    }
    cout << sum << endl;
    return 0;
}
