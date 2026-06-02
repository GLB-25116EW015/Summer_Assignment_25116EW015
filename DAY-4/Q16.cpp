#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int start, end;

    cout << "Enter start and end of range: ";
    cin >> start >> end;

    cout << "Armstrong numbers are: ";

    for (int num = start; num <= end; num++) {
        int temp = num;
        int digits = 0;
        int sum = 0;

        int originalNum = num;

        while (temp != 0) {
            digits++;
            temp /= 10;
        }

        temp = num;

        while (temp != 0) {
            int digit = temp % 10;
            sum += pow(digit, digits);
            temp /= 10;
        }

        if (sum == originalNum)
            cout << originalNum << " ";
    }

    return 0;
}