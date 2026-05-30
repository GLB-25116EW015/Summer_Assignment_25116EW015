#include <iostream>
using namespace std;

int main() {
    int n, reverse = 0;

    cout << "Enter a number: ";
    cin >> n;

    while (n > 0) {
        reverse = reverse * 10 + (n % 10);
        n /= 10;
    }

    cout << "Reversed number = " << reverse;

    return 0;
}