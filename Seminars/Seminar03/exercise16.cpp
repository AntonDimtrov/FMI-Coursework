#include <iostream>
using namespace std;

bool isPerfect(int num) {
    int sum = 0;
    for (int i = 1; i <= num / 2; ++i) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return sum == num;
}

int main() {
    int m, n;
    cin >> m >> n;
    
    for (int i = m; i <= n; ++i) {
        if (isPerfect(i)) {
            cout << i << endl;
        }
    }

    return 0;
}