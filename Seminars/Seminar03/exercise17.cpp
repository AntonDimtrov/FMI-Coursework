#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N;
    cin >> N;

    int prevSum, num1, num2;
    cin >> num1 >> num2;
    prevSum = num1 + num2;

    bool equalSums = true;
    int maxDiff = 0;

    for (int i = 1; i < N; ++i) {
        cin >> num1 >> num2;
        int currentSum = num1 + num2;
        
        if (currentSum != prevSum) {
            equalSums = false;
            maxDiff = max(maxDiff, abs(prevSum - currentSum));
        }
        
        prevSum = currentSum;
    }

    if (equalSums) {
        cout << "Equal sums: " << prevSum << endl;
    } else {
        cout << "Different sums. Max Difference: " << maxDiff << endl;
    }

    return 0;
}
