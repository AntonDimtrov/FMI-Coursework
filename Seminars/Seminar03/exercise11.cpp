#include <iostream>
using namespace std;

int digitSum(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int number;
    while (true) {
        cin >> number;
        int total_sum = number + digitSum(number);
        if (total_sum % 10 == 0) {
            cout << "Program finished [" << number << " + " << digitSum(number) << " = " << total_sum << "]" << endl;
            break;
        } else {
            cout << "Bad number [" << number << " + " << digitSum(number) << " = " << total_sum << " does not divide by 10]" << endl;
        }
    }
    return 0;
}
