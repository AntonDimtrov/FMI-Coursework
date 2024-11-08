#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int total_sum = N * (N + 1) / 2;
    int sum = 0;
    
    for (int i = 0; i < N - 1; ++i) {
        int num;
        cin >> num;
        sum += num;
    }

    cout << "Missing number: " << total_sum - sum << endl;
    return 0;
}
