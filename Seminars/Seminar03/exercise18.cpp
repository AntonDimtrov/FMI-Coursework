#include <iostream>
using namespace std;

bool isSpecial(int num, int K) {
    while (num > 0) {
        int digit = num % 10;
        if (digit == 0 || K % digit != 0) {
            return false;
        }
        num /= 10;
    }
    return true;
}

int main() {
    int K, N, M;
    cin >> K >> N >> M;

    for (int i = N; i <= M; i++) {
        if (isSpecial(i, K)) {
            cout << i << " ";
        }
    }
    return 0;
}
