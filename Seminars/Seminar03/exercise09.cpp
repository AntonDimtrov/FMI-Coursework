#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;  
    if (num == 2) return true;    
    if (num % 2 == 0) return false;  
    for (int i = 3; i * i <= num; i+=2) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int N, M;
    cin >> N >> M;
    int sum = 0;

    for (int i = N; i <= M; ++i) {
        if (isPrime(i)) {
            sum += i;
        }
    }

    cout << "Sum of primes: " << sum << endl;
    return 0;
}
