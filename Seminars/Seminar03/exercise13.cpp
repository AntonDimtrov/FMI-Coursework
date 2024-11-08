#include <iostream>
using namespace std;

int main() {
    int start_hour, start_minute, end_hour, end_minute;

    cin >> start_hour  >> start_minute;
    cin >> end_hour  >> end_minute;

    while (start_hour < end_hour || (start_hour == end_hour && start_minute < end_minute)) {
        printf("%02d:%02d\n", start_hour, start_minute);
        start_minute++;
        if (start_minute == 60) {
            start_minute = 0;
            start_hour++;
        }
    }

    return 0;   
}
