#include <iostream>
#include <cmath>
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

char toUpper(char ch) {
    return (ch >= 'a' && ch <= 'z') ? ch - ('a' - 'A') : ch;
}

char toLower(char ch) {
    return (ch >= 'A' && ch <= 'Z') ? ch + ('a' - 'A') : ch;
}

void sort3(int &min, int &mid, int &max) {
    if (min > mid) swap(min, mid);
    if (mid > max) swap(mid, max);
    if (min > mid) swap(min, mid);
}

void validateStudentData(int &age, int &facultyNumber) {
    if (age < 15) age = 15;
    if (age > 100) age = 100;
    if (facultyNumber < 10000) facultyNumber = 10000;
    if (facultyNumber > 99999) facultyNumber = 99999;
}

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

void simplifyFraction(int &numerator, int &denominator) {
    int divisor = gcd(numerator, denominator);
    numerator /= divisor;
    denominator /= divisor;
}

int getDigitAt(int num, int k) {
    for (int i = 1; i < k; i++) {
        num /= 10;
    }
    return num % 10;
}

int setDigitAt(int num, int k, int newDigit) {
    int powerOfTen = pow(10, k - 1);
    int lowerPart = num % powerOfTen;
    int upperPart = num / (powerOfTen * 10) * (powerOfTen * 10);
    return upperPart + newDigit * powerOfTen + lowerPart;
}

void swapKthDigits(int &n, int &m, int k) {
    int digitN = getDigitAt(n, k);
    int digitM = getDigitAt(m, k);
    n = setDigitAt(n, k, digitM);
    m = setDigitAt(m, k, digitN);
}

void splitNumber(int n, int &part1, int &part2) {
    int numDigits = 0, temp = n;
    while (temp > 0) {
        temp /= 10;
        numDigits++;
    }
    int splitPoint = (numDigits + 1) / 2;
    part1 = n / pow(10, numDigits - splitPoint);
    part2 = n % static_cast<int>(pow(10, numDigits - splitPoint));
}

void calculateLastShowEndTime(int n) {
    int lastHour = 0, lastMinute = 0;
    for (int i = 0; i < n; i++) {
        int hour, minute, duration;
        cin >> hour >> minute >> duration;
        int endHour = hour + (minute + duration) / 60;
        int endMinute = (minute + duration) % 60;
        if (endHour > lastHour || (endHour == lastHour && endMinute > lastMinute)) {
            lastHour = endHour;
            lastMinute = endMinute;
        }
    }
    cout << lastHour << " " << lastMinute << endl;
}

int countDistinctPrimeDivisors(int n) {
    int count = 0;
    for (int i = 2; i <= n; i++) {
        if (n % i == 0) {
            count++;
            while (n % i == 0) n /= i;
        }
    }
    return count;
}

void findNumbersWithKPrimeDivisors(int &a, int &b, int k) {
    int minVal = -1, maxVal = -1;
    for (int i = a; i <= b; i++) {
        if (countDistinctPrimeDivisors(i) == k) {
            if (minVal == -1) minVal = i;
            maxVal = i;
        }
    }
    if (minVal != -1) {
        a = minVal;
        b = maxVal;
    }
}

void transferLastKDigits(int &a, int &b, int k) {
    int powerOfTen = pow(10, k);
    int lastKDigits = a % powerOfTen;
    a /= powerOfTen;
    b = lastKDigits * pow(10, static_cast<int>(log10(b) + 1)) + b;
}

bool isLeapYear(unsigned year) {
    return (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
}

bool isValidDate(unsigned day, unsigned month, unsigned year) {
    if (month < 1 || month > 12 || day < 1) return false;
    unsigned daysInMonth[] = {31, 28 + isLeapYear(year), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    return day <= daysInMonth[month - 1];
}

void nextDay(unsigned &day, unsigned &month, unsigned &year) {
    unsigned daysInMonth[] = {31, 28 + isLeapYear(year), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    day++;
    if (day > daysInMonth[month - 1]) {
        day = 1;
        month++;
        if (month > 12) {
            month = 1;
            year++;
        }
    }
}

void addDays(unsigned &day, unsigned &month, unsigned &year, unsigned n) {
    for (unsigned i = 0; i < n; i++) {
        nextDay(day, month, year);
    }
}
