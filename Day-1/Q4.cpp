#include <iostream>
using namespace std;

int main() {
    int n, count = 0;

    cout << "Enter a number: ";
    cin >> n;

    int temp = n;

    if(temp == 0)
        count = 1;
    else {
        while(temp != 0) {
            temp /= 10;
            count++;
        }
    }

    cout << "Number of digits = " << count;

    return 0;
}