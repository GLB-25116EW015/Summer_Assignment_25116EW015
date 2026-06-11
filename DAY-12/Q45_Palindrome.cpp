#include <iostream>
using namespace std;
bool isPalindrome(int number){
    int original = number;
    int reverse = 0;
    while (number > 0)
    {
        int digit = number % 10;
        reverse = reverse * 10 + digit;
        number /= 10;
    }
    return original == reverse;
}
int main(){
    int number;
    cout << "Enter a number: ";
    cin >> number;
    if (isPalindrome(number))
        cout << "Palindrome Number";
    else
        cout << "Not a Palindrome Number";
    return 0;
}