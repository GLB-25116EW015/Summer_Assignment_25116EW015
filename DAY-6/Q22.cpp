#include <iostream>
#include <string>
using namespace std;

int main() {
    string binary;
    cin >> binary;

    int decimal = 0;

    for (char bit : binary) {
        decimal = decimal * 2 + (bit - '0');
    }

    cout << decimal;
    return 0;
}