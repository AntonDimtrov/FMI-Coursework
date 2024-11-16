#include <iostream>
#include <cmath>
using namespace std;

int sum(int a, int b) {
    return a + b;
}

bool isEven(int num) {
    return num % 2 == 0;
}

bool isPositive(int num) {
    return num > 0;
}
bool isNegative(int num) {
    return num < 0;
}

int abs(int num) {
    return num < 0 ? -num : num;
}
double fabs(double num) {
    return num < 0 ? -num : num;
}

void print(char S, int N) {
    for (int i = 0; i < N; ++i) {
        cout << S;
    }
    cout << endl;
}

bool isCapitalLetter(char S) {
    return S >= 'A' && S <= 'Z';
}
bool checkSymbol(char S) {
    return (S >= 'A' && S <= 'Z') || (S >= 'a' && S <= 'z');
}

char to_lower(char ch) {
    return (ch >= 'A' && ch <= 'Z') ? ch + ('a' - 'A') : ch;
}
char to_upper(char ch) {
    return (ch >= 'a' && ch <= 'z') ? ch - ('a' - 'A') : ch;
}

int getLength(int n) {
    int length = 0;
    do {
        n /= 10;
        length++;
    } while (n != 0);
    return length;
}

int getDigitAt(int n, int k) {
    int length = getLength(n);
    if (k > length || k <= 0) return -1; 
    for (int i = 0; i < length - k; ++i) {
        n /= 10;
    }
    return n % 10;
}

bool isPerfectSquare(int n) {
    int root = sqrt(n);
    return root * root == n;
}

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}
int lcm(int a, int b) {
    return a / gcd(a, b) * b;
}
int lcm(int a, int b, int c) {
    return lcm(lcm(a, b), c);
}

int concat(int first, int second) {
    int multiplier = 1;
    while (multiplier <= second) {
        multiplier *= 10;
    }
    return first * multiplier + second;
}

bool isInInterval(int n, int from, int to) {
    return n >= from && n <= to;
}
int askUser(int from, int to) {
    int n;
    do {
        cout << "Enter a number in range [" << from << "; " << to << "]: ";
        cin >> n;
    } while (!isInInterval(n, from, to));
    return n;
}

int pow(int num, unsigned int N) {
    int result = 1;
    for (unsigned int i = 0; i < N; ++i) {
        result *= num;
    }
    return result;
}

int calculate(int a, int b, char action) {
    switch (action) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': return b != 0 ? a / b : 0;
        case '%': return b != 0 ? a % b : 0;
        default: return a + b;
    }
}

int gcd(int a, int b, int c, int d) {
    return gcd(gcd(a, b), gcd(c, d));
}

int nearestPowerOfTwo(int n) {
    int lower = 1;
    while (lower * 2 <= n) {
        lower *= 2;
    }
    int upper = lower * 2;
    return (n - lower < upper - n) ? lower : upper;
}

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) return false;
    }
    return true;
}
void printPrimes(int n) {
    for (int i = 2; i <= n; ++i) {
        if (isPrime(i)) cout << i << " ";
    }
    cout << endl;
}
bool isSumOfTwoPrimes(int n) {
    for (int i = 2; i < n; ++i) {
        if (isPrime(i) && isPrime(n - i)) return true;
    }
    return false;
}

int digitSum(int n) {
    while (n >= 10) {
        int sum = 0;
        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }
        n = sum;
    }
    return n;
}

void factorize(int n) {
    for (int i = 2; i <= n; ++i) {
        while (n % i == 0) {
            cout << i;
            n /= i;
            if (n > 1) cout << ".";
        }
    }
    cout << endl;
}

int sortDigits(int n) {
    int digits[10] = {0};
    while (n > 0) {
        digits[n % 10]++;
        n /= 10;
    }
    int result = 0;
    for (int i = 0; i < 10; ++i) {
        while (digits[i] > 0) {
            result = result * 10 + i;
            digits[i]--;
        }
    }
    return result;
}

int main(){
    return 0;
}
