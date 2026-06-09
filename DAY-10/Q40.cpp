#include <iostream>
using namespace std;

int main() {
    int n = 5;

    for(int i = 0; i < n; i++) {

        // Ascending characters
        for(int j = 0; j <= i; j++) {
            cout << char('A' + j);
        }

        // Descending characters
        for(int j = i - 1; j >= 0; j--) {
            cout << char('A' + j);
        }

        cout << endl;
    }

    return 0;
}