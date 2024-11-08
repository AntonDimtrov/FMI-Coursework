#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int total_sum = 0;

    for (int i = 1; i <= N; ++i) {
        total_sum += (N + 1 - i) * i;
    }

    cout << total_sum << endl;
    return 0;
}
