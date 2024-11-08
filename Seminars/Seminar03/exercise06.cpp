#include <iostream>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    int counter = 1;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << counter << " ";
            counter++;
        }
        cout << endl;
    }
    return 0;
}
