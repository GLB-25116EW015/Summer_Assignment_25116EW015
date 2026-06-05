#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n == 0) {
        cout << 0;
        return 0;
    }

    string binary = "";

    while (n > 0) {
        binary = char((n % 2) + '0') + binary;
        n /= 2;
    }

    cout << binary;
    return 0;
}