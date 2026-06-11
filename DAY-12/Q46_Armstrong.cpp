#include <iostream>
#include <cmath>
using namespace std;
bool isArmstrong(int number){
    int original = number;
    int digits = 0;
    int sum = 0;
    int temp = number;
    while (temp > 0)
    {
        digits++;
        temp /= 10;
    }
    temp = number;
    while (temp > 0){
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }
    return sum == original;
}
int main(){
    int number;
    cout << "Enter a number: ";
    cin >> number;
    if (isArmstrong(number))
        cout << "Armstrong Number";
    else
       cout << "Not an Armstrong Number";
    return 0;
}