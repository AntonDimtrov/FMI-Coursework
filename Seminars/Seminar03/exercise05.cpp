#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int square = N * N;
    int reversed = 0;

    while (square > 0) {
        reversed = reversed * 10 + (square % 10);
        square /= 10;
    }

    cout << reversed << endl;
    return 0;
}
