#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    if (n >= 0 && m <= 255) {
        for (int i = n; i <= m; ++i) {
            cout << i << " --> " << char(i) << endl;
        }
    } else {
        cout << "Invalid codes!" << endl;
    }
    return 0;
}
